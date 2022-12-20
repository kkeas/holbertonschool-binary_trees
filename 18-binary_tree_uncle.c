#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	binary_tree_t *aux;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	aux = binary_tree_sibling(node->parent);

	if (aux == NULL)
		return (NULL);

	return (aux);

}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
