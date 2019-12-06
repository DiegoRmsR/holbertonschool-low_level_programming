#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 *
 * @tree: pointer to the root node of
 * the tree to measure the heigh
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countle = 0, countri = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	countle = binary_tree_height(tree->left);
	countri = binary_tree_height(tree->right);
	if (countle > countri)
		return (1 + countle);
	return (1 + countri);
}
