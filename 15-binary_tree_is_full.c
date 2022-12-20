#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: number the nodes with at least 1 child in a binary tree
 */

int binary_tree_is_full(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if ((tree->right) && (tree->left))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
