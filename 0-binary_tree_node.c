#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to parent node of node to create.
 * @value: Value to put in new node.
 * Return: Pointer to new node or NULL on failure.za
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	return (new);
}
