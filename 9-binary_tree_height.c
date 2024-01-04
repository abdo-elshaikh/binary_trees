#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;
	size_t y = 0;

	if (!tree)
		return (0);
	x = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	y = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return ((x > y) ? x : y);
}
