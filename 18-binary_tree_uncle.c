#include "binary_trees.h"

/**
 * binary_tree_uncle- function that finds the uncle of a node
 * @node: is a pointer to the node to find uncle
 * Return: uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = node->parent->parent;

	if (!node || !node->parent || !grand || !grand->left || !grand->right)
		return (NULL);
	if (grand->left == node->parent)
		return (grand->right);
	return (grand->left);
