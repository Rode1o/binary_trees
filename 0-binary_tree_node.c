#include "binary_trees.h"
/**
 * binary_tree_node - Binary Tree Node
 * @parent: Pointer to the parent node
 * @value: Integer stored on node
 * Return: if fail Null, otherwise result
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *result = malloc(sizeof(binary_tree_t));
if (!result)
{
return (NULL);
}
result->parent = parent;
result->n = value;
result->left = result->right = NULL;
return (result);
}
