#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;
	size_t y = 0;

	if (!tree)
		return (0);
	if (tree->left)
		x = 1 + binary_tree_height(tree->left);
	if (tree->right)
		y = 1 + binary_tree_height(tree->right);
	return ((x > y) ? x : y);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) == binary_tree_height(tree->right));
}
