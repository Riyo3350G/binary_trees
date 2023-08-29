#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node
 * @tree: Pointer to the node to measure the depth
 * Return: INT -> (0 if tree is NULL)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}