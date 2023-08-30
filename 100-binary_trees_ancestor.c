#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @f: stands for first node -> Pointer to the first node.
 * @s: stands for second node -> Pointer to the second node.
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *f,
	const binary_tree_t *s)
{
	const binary_tree_t *firstNode;
	const binary_tree_t *secondNode;
	binary_tree_t *firstNode_p, *secondNode_p;

	firstNode = f;
	secondNode = s;

	/* return NULL if first node is NULL or second node is NULL */
	if (!firstNode || !secondNode)
		return (NULL);

	/* checks if firstNode and secondNode are Equal */
	if (firstNode == secondNode)
		return ((binary_tree_t *)firstNode);

	/* get firstNode and secondNode parents */
	firstNode_p = firstNode->parent;
	secondNode_p = secondNode->parent;

	if (firstNode == secondNode_p ||
		!firstNode_p ||
		(!firstNode_p->parent && secondNode_p))
		return (binary_trees_ancestor(firstNode, secondNode_p));
	else if (firstNode_p == secondNode ||
		!secondNode_p ||
		(!secondNode_p->parent && firstNode_p))
		return (binary_trees_ancestor(firstNode_p, secondNode));

	return (binary_trees_ancestor(firstNode_p, secondNode_p));
}
