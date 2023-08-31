#include "binary_trees.h"

/**
 * binary_tree_is_perfect - measures the height of a binary tree
 * @tree : is a pointer to the root node
 *
 * Return: o if not 1 if true.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left !=NULL && tree->right == NULL))
		return (0);

	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);
	
	return (1);
}
