#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: INT -> 1 or 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}