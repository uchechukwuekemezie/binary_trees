#include "binary_trees.h"
/**
 *binary_tree_node - function creates a tree node
 *@parent: pointer to the parent node
 *@value: value to a new node
 *Return: returns a new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *temp_node = malloc(sizeof(binary_tree_t));

if (temp_node == NULL)
{
return (NULL);
}

temp_node->n = value;
temp_node->parent = parent;
temp_node->left = NULL;
temp_node->right = NULL;

return (temp_node);
}
