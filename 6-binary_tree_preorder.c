#include "binary_trees.h"
/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversial
 *@tree: tree to serach through
 *@func: function to search to the tree
 *Return: value of the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
if (tree != NULL)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
