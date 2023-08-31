#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in a binary tree
 * @tree : is a pointer to the root node
 * Return: count of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		count++;
	}
	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);
	return (count);
}
