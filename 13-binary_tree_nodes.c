#include "binary_trees.h"


/**
  * binary_tree_nodes - counts the number of nodes in a tree
  * @tree: binary tree
  * Return: number of nodes, 0 if NULL
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_Size = 0, r_Size = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		l_Size = binary_tree_nodes(tree->left);
		r_Size = binary_tree_nodes(tree->right);
		return (1 + l_Size + r_Size);
	}
	else
		return (0 + l_Size + r_Size);
}
