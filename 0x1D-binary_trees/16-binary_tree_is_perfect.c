#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int le = 0;

	if (node && !(node->left) && !(node->right))
		le = 1;

	return (le);
}

/**
 * binary_tree_is_parent_full - checks if a node is a parent
 *
 * @node: pointer to the node to check
 * Return: 1 if node is a parent, otherwise 0
 */
int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int paren = 0;

	if (node && node->left && node->right)
		paren = 1;

	return (paren);
}

/**
 * height - measures the height of a tree
 *
 * @tree: tree root
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	int le = 0;
	int rig = 0;

	if (tree == NULL)
		return (-1);

	le = height(tree->left);
	rig = height(tree->right);

	if (le > rig)
		return (le + 1);

	return (rig + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: tree root
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
