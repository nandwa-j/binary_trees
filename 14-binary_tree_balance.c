#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - checks the balance of a tree
 * @tree: binary tree
 *
 * Return: size of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r_Height = 0, l_Height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_Height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r_Height = binary_tree_height(tree->right) + 1;
	return (l_Height - r_Height);
}
