#include "binary_trees.h"

/**
 * binary_tree_is_full - measures the height of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: o if not 1 if true.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf_H, rt_H;

	if (tree == NULL)
		return (0);

	lf_H = binary_tree_is_full(tree->left);
	rt_H = binary_tree_is_full(tree->right);

	if (lf_H + 1 == rt_H + 1)
		return (1);
	else
		return (0);
}
