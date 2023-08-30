#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;
	binary_tree_t *tmp, *tmp_p;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	pivot = tree->left;
	tmp = pivot->right;

	pivot->right = tree;
	tree->left = tmp;

	if (tmp != NULL)
	{
		tmp->parent = tree;
	}

	tmp_p = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp_p;

	if (tmp_p != NULL)
	{
		if (tmp_p->right == tree)
		{
			tmp_p->right = pivot;
		}
		else
		{
			tmp_p->left = pivot;
		}
	}

	return (pivot);
}
