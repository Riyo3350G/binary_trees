#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer that point to the node to find the sibling
 * Return: a pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* checks if node is NULL or node->parent is null */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	/* checks if node->parent->left == node */
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	/* Return node->parent->left */
	return (node->parent->left);
}
