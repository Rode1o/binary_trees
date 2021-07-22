#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect`
 *
 *@tree: pointer to the root node of the tree to measure the height.
 *
 *Return: height of the node or   0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	 size_t left_height = 0;
	 size_t right_height = 0;

	if ((tree == NULL) || (!tree->left && !tree->right))
		return (0);
	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);
	if (left_height == right_height)
		return (1);
	else
		return (0);

}
