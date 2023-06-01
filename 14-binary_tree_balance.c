#include "binary_trees.h"
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
 *get_height - gets the  height of the right and left subtrees
 *@tree: pointer to binary tree
 *Return: height
 */
int get_height(binary_tree_t *tree)
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
 *binary_tree_balance - measures the balance factor
 *@tree: pointer to tree
 *Return: not sure yet
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (get_height(tree->left) - get_height(tree->right));
}
