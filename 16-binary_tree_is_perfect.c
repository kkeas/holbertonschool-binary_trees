#include "binary_trees.h"

/**
 * measure - measures the total size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the measure of a binary tree or 0 if tree is NULL
 */

int measure(const binary_tree_t *tree)
{

	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (measure(tree->left) + measure(tree->right) + 1);
}
/**
 * binary_tree_is_perfect-  counts the nodes with at least 1 child in a b tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: number the nodes with at least 1 child in a binary tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = measure(tree->left);
		right = measure(tree->right);
	}
	if (left == right)
		return (1);

	return (0);
}
