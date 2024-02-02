#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Number of leaves in the binary tree. 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		n_leaves += 1;
	}

	n_leaves += binary_tree_leaves(tree->left);
	n_leaves += binary_tree_leaves(tree->right);

	return (n_leaves);
}
