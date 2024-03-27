#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	point = tree->left;
	tree->left = point->right;
	if (point->right != NULL)
	{
		point->right->parent = tree;
	}
	point->right = tree;
	point->parent = tree->parent;
	tree->parent = point;
	return (point);
}
