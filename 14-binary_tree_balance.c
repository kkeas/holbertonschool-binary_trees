#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)


{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
	   return (0);

	   height_l = binary_tree_height(tree->left);
	   height_r = binary_tree_height(tree->right);

	   return (height_l - height_r);

}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
	   return (0);

	   if (tree->left == NULL && tree->right == NULL)
	      return (1);

	      height_l = binary_tree_height(tree->left) + 1;
	      height_r = binary_tree_height(tree->right) + 1;

	      if (height_l >= height_r)
	      	 return (height_l);

		 else
			return (height_r);
}