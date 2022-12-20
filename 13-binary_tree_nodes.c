#include "binary_trees.h"

/**
 * binary_tree_nodes-  counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: number the nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count = 1;

	count += binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);
	return (count);
}
