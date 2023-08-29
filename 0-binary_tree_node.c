#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value (int) of the new node
 * Return: new Node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *node;

        node = malloc(sizeof(binary_tree_t));
        if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
