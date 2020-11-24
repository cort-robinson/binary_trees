#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lcount, rcount;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lcount = binary_tree_leaves(tree->left);
	rcount = binary_tree_leaves(tree->right);

	return (lcount + rcount);
}
