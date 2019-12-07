#include "binary_trees.h"
/**
 * *binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: pointer to the node
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->right = parent->right;
	parent->right = new_node;
	new_node->left = NULL;
	if (new_node->right != NULL)
		new_node->right->parent = new_node;
	return (new_node);
}

