#include "binary_trees.h"

/**
 * binary_tree_size - return the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size of a tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, right_side, left_side;

	size = 0;
	right_side = 0;
	left_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);
	size = right_side + left_side + 1;

	return (size);
}