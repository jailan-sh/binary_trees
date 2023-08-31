#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: the height or null if tree is NULL
 */

int binary_height(binary_tree_t *tree)
{
	int lf_H, rt_H;

	if (tree == NULL)
		return (0);

	lf_H = binary_height(tree->left);
	rt_H = binary_height(tree->right);

	return (lf_H > rt_H ? lf_H + 1 : rt_H + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree : is a pointer to the root node
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_height(tree->left) - binary_height(tree->right));
}
