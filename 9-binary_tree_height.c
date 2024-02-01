#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Height of the binary tree. 0 if tree is NULL or has no children.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight, rHeight, tHeight;

	if (!tree)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);

	if (lHeight > rHeight)
		tHeight = lHeight + 1;
	else
		tHeight = rHeight + 1;

	return (tHeight);
}
