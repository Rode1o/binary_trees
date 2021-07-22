#include "binary_trees.h"

/**
 *binary_tree_uncle - function that finds the uncle of a node
 *@node: pointer to the node to find the sibling
 *
 *Return: node->parent->left or (node->parent->right
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (0);
	}
	if (node->parent->parent->right ==  node->parent &&
	    node->parent->parent->left != NULL)
	{
		return (node->parent->parent->left);
	}
	if (node->parent->parent->left == node->parent  &&
	    node->parent->parent->right != NULL)
	{
		return (node->parent->parent->right);
	}

	return (0);
}
