#include "binary_trees.h"


/**
  * binary_tree_leaves - counts the leaves in a binary tree
  * @tree: binary tree
  * Return: number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_Size = 0, r_Size = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		l_Size = binary_tree_leaves(tree->left);
		r_Size = binary_tree_leaves(tree->right);
		return (0 + l_Size + r_Size);
	}
	else
		return (1 + l_Size + r_Size);
}
