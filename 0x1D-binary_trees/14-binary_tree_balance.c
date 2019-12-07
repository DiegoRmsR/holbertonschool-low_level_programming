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

	if (!tree)
		return (0);
	countle = binary_tree_height(tree->left);
	countri = binary_tree_height(tree->right);
	if (countle > countri)
		return (1 + countle);
	return (1 + countri);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
