#include "binary_trees.h"

/**
 * *binary_tree_p_u - to get parent node brother
 * @node : parent node of checked node
 *
 * Return: uncle or Null
 */

binary_tree_t *binary_tree_p_u(binary_tree_t *node)
{
	binary_tree_t *dad = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	dad = node->parent;
	if (dad->left && (dad->left != node))
		return (dad->left);
	else if (dad->right && (dad->right != node))
		return (dad->right);
	else
		return (NULL);
}


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
	return (binary_tree_p_u(node->parent));
}
