#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the depth of a binary tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t sizeTree = 1;

	if (!tree)
		return (0);

	sizeTree += binary_tree_size(tree->left);
	sizeTree += binary_tree_size(tree->right);

	return (sizeTree);
}
