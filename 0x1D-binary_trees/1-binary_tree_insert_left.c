#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 *
 * @parent: pointer to the node
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->left = parent->left;
	parent->left = new_node;
	new_node->right = NULL;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	return (new_node);
}
