#include "binary_trees.h"

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent : a pointer to the node to insert the left-child in
 * @value : data n
 *
 * Return: new node at left side or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->right = NULL;
	new_left->parent = parent;

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
		parent->left = new_left;
	}
	else
	{
		parent->left = new_left;
		new_left->left = NULL;
	}
	return (new_left);
}
