#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect`
 *
 *@tree: pointer to the root node of the tree to measure the height.
 *
 *Return: height of the node or   0 if tree is NULL
 */

int tree_height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left = 0, right = 0;
    int l_height = 0, r_height = 0;

    if (!tree)
        return (0);
    if (!tree->left || !tree->right)
        return (1);
    if (tree->left || tree->right)
    {
        l_height = tree_height(tree->left);
        r_height = tree_height(tree->right);
    }
    if (l_height == r_height)
    {
        left = binary_tree_is_perfect(tree->left);
        right = binary_tree_is_perfect(tree->right);
    }
    if (left && right)
        return(1);
    return (0);
}
/**
*
*
*
*
*/

int tree_height(const binary_tree_t *tree)
{
	 int left_height = 0;
	 int right_height = 0;

	if ((tree == NULL) || (!tree->left && !tree->right))
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);

}
