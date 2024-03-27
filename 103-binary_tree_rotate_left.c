#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *point;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	point = tree->right;
	tree->right = point->left;
	if (point->left != NULL)
	{
		point->left->parent = tree;
	}
	point->left = tree;
	point->parent = tree->parent;
	tree->parent = point;
i	return (point);
}
