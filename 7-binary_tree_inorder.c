#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverse a binary tree using inorder traversal.
 *
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to a function to perform on each node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		/* Recursively traverse the left subtree */
		binary_tree_inorder(tree->left, func);

		func(tree->n);  /* Process the current node */

		/* Recursively traverse the right subtree */
		binary_tree_inorder(tree->right, func);

	}
}
