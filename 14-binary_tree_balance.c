#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = (int)binary_tree_height(tree->left);
	else
		height_l = -1;

	if (tree->right)
		height_r = (int)binary_tree_height(tree->right);
	else
		height_r = -1;

	return (height_l - height_r);
}

