#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value (int) of the new node
 * Return: new Node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
