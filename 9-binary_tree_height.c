#include "binary_trees.h"

/**
 * max - Returns the maximum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Maximum of the two integers
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
}

