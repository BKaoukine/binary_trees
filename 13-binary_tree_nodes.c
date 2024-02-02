#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Number of nodes in the binary tree. 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		n_nodes += 1;
	}

	n_nodes += binary_tree_nodes(tree->left);
	n_nodes += binary_tree_nodes(tree->right);

	return (n_nodes);
}
