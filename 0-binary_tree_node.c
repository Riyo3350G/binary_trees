#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value (int) of the new node
 * Return: New Node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode != NULL)
	{
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
	}
	else
		return (NULL);
	return (newNode);
}
