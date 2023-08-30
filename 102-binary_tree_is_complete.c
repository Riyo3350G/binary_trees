#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: INT -> 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side >= right_side)
		return (1 + left_side);

	return (1 + right_side);
}

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

/**
 * binary_tree_is_complete - func thats checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: (INT) -> 1 or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *leftNode;
	binary_tree_t *rightNode;

	size_t leftNode_height;
	size_t rightNode_height;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	leftNode = tree->left;
	rightNode = tree->right;
	leftNode_height = binary_tree_height(leftNode);
	rightNode_height = binary_tree_height(rightNode);

	if (leftNode_height == rightNode_height)
	{
		if (binary_tree_is_perfect(leftNode) &&
			binary_tree_is_complete(rightNode))
			return (1);
	}
	else if (leftNode_height == rightNode_height + 1)
	{
		if (binary_tree_is_complete(leftNode) &&
			binary_tree_is_perfect(rightNode))
			return (1);
	}

	return (0);
}