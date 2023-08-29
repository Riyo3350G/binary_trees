#include "binary_trees.h"

/**
 * binary_tree_uncle - Func thats finds the uncle of a node
 * @node: Target
 * Return: NULL or pointer that point to the uncle of a node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	return (node->parent->parent->left);
}
