#include "binary_trees.h"

/**
 * binary_tree_uncle- function that finds the uncle of a node
 * @node: is a pointer to the node to find uncle
 * Return: uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (!node || !node->parent || !grandparent)
		return (NULL);
	if (grandparent->left == node->parent)
		return (grandparent->right);
	return (grandparent->left);
}
