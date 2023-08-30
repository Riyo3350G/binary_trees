#include "binary_trees.h"

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
 * tree_level_action - perform a specified action
 *   on all nodes of a binary tree at a given level.
 * @tree: pointer to the root node of the tree
 * @level: The level at which the action should be performed
 * @func: A pointer to a function that takes an integer
 * Return: Nothing
*/

void tree_level_action(const binary_tree_t *tree, size_t level,
	void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		tree_level_action(tree->left, level - 1, func);
		tree_level_action(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - that goes through a binary tree
 *   using level-order traversal
 * @tree: pointer to the root node of the tree
 * @func: A pointer to a function that takes an integer
 * Return: nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree,
	void (*func)(int))
{
	size_t treeHeight;
	size_t index;

	if (tree == NULL || func == NULL)
		return;

	treeHeight = binary_tree_height(tree);

	index = 1;
	while (index <= treeHeight)
	{
		tree_level_action(tree, index, func);
		index++;
	}
}
