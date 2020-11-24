#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to be measured.
 * Return: Size of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	return (rheight + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * 
 * @tree: Pointer to root node of the tree to measure.
 * Return: Balance factor of tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
