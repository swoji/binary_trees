#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as
 * the left-child of another.
 *
 * @parent: pointer to the node to insert the left-child.
 * @value: value to store in new node.
 *
 * Return: New node or NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (!parent)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (!left_node)
		return (NULL);

	if (parent->left)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
