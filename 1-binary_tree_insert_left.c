#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node
 * as the left child of a given node.
 *
 * @parent: Pointer to the parent node where the new node
 * will be inserted as the left child.
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;

		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}

