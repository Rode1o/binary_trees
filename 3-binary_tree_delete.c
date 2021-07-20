#include "binary_trees.h"

/**
*binary_tree_delete - delete all trees
*
*@tree: pointer to the root node of the tree to delete
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		free(tree);
	}
}
