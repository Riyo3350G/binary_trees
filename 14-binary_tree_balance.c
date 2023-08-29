#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree ==  NULL)
		return (0);

	else
	{
		left_balance = binary_tree_height_bl(tree->left);
		right_balance = binary_tree_height_bl(tree->right);
		return (left_balance - right_balance);
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */
size_t binary_tree_height_bl(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	right_side = 0;
	left_side = 0;

	if (tree)
	{
		left_side = tree->left ? 1 + binary_tree_height_bl(tree->left) : 1;
		right_side = tree->right ? 1 + binary_tree_height_bl(tree->right) : 1;
		return ((left_side > right_side) ? left_side : right_side);
	}
	return (0);
}
