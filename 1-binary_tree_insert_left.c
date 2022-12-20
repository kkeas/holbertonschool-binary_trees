#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 * @value: is the value to store in the new node
 * @parent: is a pointer to the node to insert the left-child in
 * Return: a pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
