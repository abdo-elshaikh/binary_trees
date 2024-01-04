#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->left;
	parent->left = new;
	if (new->right)
		new->right->parent = new;

	return (new);
}
