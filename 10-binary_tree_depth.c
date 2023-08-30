#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: the height or null if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
