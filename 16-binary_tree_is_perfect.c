#include "binary_trees.h"

/**
 * depth - get the depth for all left nodes
 * @node : tree to be checked
 *
 * Return: depth
 */

int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * isprefect - recrusive check if the tree is prefect
 * @node : node to check
 * @d : depth for left nodes
 * @level: Initial level compared with depth
 *
 * Return: 1 if it is perfect, 0 is NULL or isn't perfect
 */

int isprefect(const binary_tree_t *node, int d, int level)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (d == level + 1);
	if (node->left == NULL || node->right == NULL)
		return (0);
	return (isprefect(node->left, d, level + 1)
			&& isprefect(node->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - measures the height of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: o if not 1 if true.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = depth(tree);
	return (isprefect(tree, d, 0));
}
