#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as right-child of another node.
 *
 * @parent: Pointer to node to insert right-child in.
 * @value: Value to store in new node.
 * Return: Pointer to new node or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
