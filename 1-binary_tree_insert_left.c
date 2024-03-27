#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);

	child->parent = parent;
	child->n = value;
	child->left = parent->left;
	child->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = child;

	parent->left = child;

	return (child);
}
