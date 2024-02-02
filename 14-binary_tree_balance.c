#include "binary_trees.h"
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Balance factor of the binary tree. 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, n_balance;


	/* Base case: If tree is NULL, return 0 */
	if (!tree)
		return (0);

	/* Calculate the height of the left subtree */
	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	else
		left_height = 0;

	/* Calculate the height of the right subtree */
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;
	else
		right_height = 0;

		n_balance = left_height - right_height;

	/* Calculate the balance factor */
	return (n_balance);
}
