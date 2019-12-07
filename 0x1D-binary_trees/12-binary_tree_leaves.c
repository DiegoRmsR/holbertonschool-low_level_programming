#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the
 * leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countle = 0, countri = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		countle = binary_tree_leaves(tree->left);
		countri = binary_tree_leaves(tree->right);
	}
	else
		return (1);

	return (countle + countri);
}
