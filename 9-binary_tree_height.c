#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 * Return: Size of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if ((tree->left == NULL && tree->right == NULL) || tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = binary_tree_height(tree->left);
	if (tree->right != NULL)
		rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	return (rheight + 1);
}
