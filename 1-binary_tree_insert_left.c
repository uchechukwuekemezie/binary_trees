#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node to the left of its parent
 *@parent: parent node
 *@value: value of node
 *Return: left new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);
if (newNode == NULL)
return (NULL);

newNode->parent = parent;
newNode->n = value;
newNode->right = NULL;

if (parent->left)
{
newNode->left = parent->left;
parent->left->parent = newNode;
}
else
newNode->left = NULL;

parent->left = newNode;
return (newNode);
}
