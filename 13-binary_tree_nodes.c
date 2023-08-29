#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Nodes number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side, nodes_count;

	left_side = 0;
	right_side = 0;
	nodes_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_side = binary_tree_nodes(tree->left);
		right_side = binary_tree_nodes(tree->right);
		nodes_count = left_side + right_side;
		return ((tree->left || tree->right) ? nodes_count + 1 : nodes_count + 0);
	}
}
