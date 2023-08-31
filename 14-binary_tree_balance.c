#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: the height or null if tree is NULL
 */

size_t binary_rt_sub_tree_height(const binary_tree_t *tree)
{
        size_t rt_H;

        if (tree == NULL)
                return (0);

        lf_H = binary_tree_height(tree->left);
        rt_H = binary_tree_height(tree->right);
        if (tree->left == NULL && tree->right == NULL)
                return (lf_H > rt_H ? lf_H : rt_H);

        return (lf_H > rt_H ? lf_H + 1 : rt_H + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree : is a pointer to the root node
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lf_H, rt_H;

	if (tree == NULL)
		return (0);

	lf_H = binary_tree_height(tree->left);
	rt_H = binary_tree_height(tree->right);

	return ((int)lf_H - rt_H);
}
