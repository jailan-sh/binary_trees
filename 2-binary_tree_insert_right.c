#include "binary_trees.h"

/**
 * *binary_tree_insert_right - inserts node as the right-child of another node
 * @parent : a pointer to the node to insert the right-child in
 * @value : data n
 *
 * Return: new node right side or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_r;

	if (parent == NULL)
		return (NULL);

	new_r = malloc(sizeof(binary_tree_t));
	if (new_r == NULL)
		return (NULL);

	new_r->n = value;
	new_r->left = NULL;
	new_r->parent = parent;

	if (parent->right != NULL)
	{
		new_r->right = parent->right;
		parent->right->parent = new_r;
		parent->right = new_r;
	}
	else
	{
		parent->right = new_r;
		new_r->right = NULL;
	}
	return (new_r);
}
