#include "binary_trees.h"
/**
 *binary_tree_inorder - same as task 6 just using in-order traversal
 *@tree: binary tree to be searched through
 *@func: function to get the value at each search
 *Return: values at each point.. and nothing if tree and func is null
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
if (tree != NULL)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
