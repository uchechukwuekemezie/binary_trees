#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts new node at right node child
 *@parent: pointer to root node
 *@value: value of the node
 *Return: null if there is no node inserted and right node if there is
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);
if (newNode == NULL)
return (NULL);

newNode->parent = parent;
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;

if (parent->right != NULL)
{
newNode->right = parent->right;
newNode->right->parent = newNode;
parent->right = newNode;
}
else
parent->right = newNode;
return (newNode);
}
