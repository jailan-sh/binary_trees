#include "binary_trees.h"

/**
 * binary_tree_uncle- function that finds the uncle of a node
 * @node: is a pointer to the node to find uncle
 * Return: uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
