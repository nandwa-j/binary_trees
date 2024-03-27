#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_child;

	if (!parent)
		return (NULL);

	r_child = malloc(sizeof(binary_tree_t));
	if (!r_child)
		return (NULL);

	r_child->parent = parent;
	r_child->n = value;
	r_child->left = NULL;
	r_child->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = r_child;

	parent->right = r_child;

	return (r_child);
}
