#include "binary_trees.h"

/**
 * *binary_tree_uncle - finds the uncle of a node
 * @node : pointer to the node to find the sibling
 *
 * Return: a pointer to the uncle node
 * or If node is NULL or the parent is NULL, return NULL
 * If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->parent->left);
	else
		return(node->parent->parent->right);
}
