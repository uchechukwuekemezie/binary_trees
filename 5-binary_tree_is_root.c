#include "binary_trees.h"
/**
 *binary_tree_is_root - checks to see if node is a root meaning it has no
 *parent
 *@node: node to check
 *Return: 1 if node it a root and 0 if it is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->parent == NULL)
return (1);
return (0);
}
