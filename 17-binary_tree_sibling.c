#include "binary_trees.h"

/**
 *binary_tree_sibling - function that finds the sibling of a node
 *
 *@node: pointer to the node to find the sibling
 *
 *Return: node->parent->left or (node->parent->right
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (0);
	}
	if (node->parent->right ==  node && node->parent->left != NULL)
	{
		return (node->parent->left);
	}
	if (node->parent->left == node  && node->parent->right != NULL)
	{
		return (node->parent->right);
	}

	return (0);
}
