#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node
 * as the right child of a given node.
 *
 * @parent: Pointer to the parent node where the new node
 * will be inserted as the right child.
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (!parent)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;

		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}

