#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_side, right_side, leaves_count;

	left_side = 0;
	right_side = 0;
	leaves_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_side = binary_tree_leaves(tree->left);
		right_side = binary_tree_leaves(tree->right);
		leaves_count = left_side + right_side;
		return ((!left_side && !right_side) ? leaves_count + 1 : leaves_count + 0);
	}
}
