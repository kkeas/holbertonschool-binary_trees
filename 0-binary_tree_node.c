#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
* @value: Integer stored in the node
* @parent: Pointer to the parent node
* Return: pointer to new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
newNode = malloc(sizeof(binary_tree_t));

if (newNode == NULL)
	return (NULL);

newNode->parent = parent;
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;

return (newNode);
}
