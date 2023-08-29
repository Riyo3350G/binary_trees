#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: new node value (n -> INT)
 * Return: pointer to the new node or null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *left_node;

	left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
