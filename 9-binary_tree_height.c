#include "binary_trees.h"
#include <stdio.h>
/**
 *max_value - gets the value greater among two values
 *@a: parameter
 *@b: parameter
 *Return: bigger value
 */
int max_value(int a, int b)
{
if (a > b)
return (a);
else
return (b);
}
/**
 *get_height - gets the height of a binary tree
 *@tree: binary tree
 *Return: max value plus 1
 */
size_t get_height(const binary_tree_t *tree)
{
if (tree != NULL)
{
return ((max_value(get_height(tree->left),
get_height(tree->right))) + 1);
}
else
return (0);
}

/**
 *binary_tree_height - measures the height of a binary tree by the number
 *children in the tree
 *@tree: the  binary tree to be searched
 *Return: the count of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (get_height(tree) - 1);
}
