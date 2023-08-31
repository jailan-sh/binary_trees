#include "binary_trees.h"

/**
 * binary_tree_uncle- function that finds the uncle of a node
 * @node: is a pointer to the node to find uncle
 * Return: uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = node->parent->parent;

	if (!node || !node->parent || !grand)
		return (NULL);
	if (grand->left == node->parent)
	{
		if (!grand->right)
		{
			return (NULL);
		}
		return (grand->right);
	}
	else if (grand->left != node->parent)
	{
		if (!grand->left)
		{
			return (NULL);
		}
		return (grand->left);
	}
	return (NULL);
}
