#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverse a binary tree using preorder traversal.
 *
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to a function to perform on each node's value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if(tree && func)
		{
			func(tree->n);  /* Process the current node */

			/* Recursively traverse the left subtree */
			binary_tree_preorder(tree->left, func);

			/* Recursively traverse the right subtree */
			binary_tree_preorder(tree->right, func);

		}
}
