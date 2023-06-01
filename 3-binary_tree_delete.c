#include "binary_trees.h"
/**
 *binary_tree_delete - deletes are whole binary tree
 *@tree: root node of tree to be deleted
 *Return: deleted tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
