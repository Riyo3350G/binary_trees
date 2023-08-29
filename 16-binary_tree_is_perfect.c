#include "binary_trees.h"

/**
 * check_if_perfect - checks if the tree is perfect
 * @tree: Tree that will be checked
 * Return: 0 or the size of a tree
 */
int check_if_perfect(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree->left && tree->right)
	{
		left_side = 1 + check_if_perfect(tree->left);
		right_side = 1 + check_if_perfect(tree->right);
		if (right_side == left_side &&
		right_side != 0 &&
		left_side != 0)
			return (right_side);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if tree is per or not
 * @tree: Tree that will be checked
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int output = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		output = check_if_perfect(tree);
		if (output != 0)
			return (1);
		return (0);
	}
}
