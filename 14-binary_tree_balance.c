#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree : is a pointer to the root node
 * Return: balance factor of a binary tree
 */
int balance(int a, int b);

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1 + (balance(binary_tree_balance(tree->left),binary_tree_balance(tree->right))));
	return (balance(binary_tree_balance(tree->left),binary_tree_balance(tree->right)));
}

/**
 */

int balance(int a, int b)
{
	return (a - b);
}
