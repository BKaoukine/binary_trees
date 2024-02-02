#include "binary_trees.h"
/**
 * binary_tree_size - Measure the size of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Size of the binary tree. 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_size(tree->left) +  binary_tree_size(tree->right) + 1;

	return (size);
}
