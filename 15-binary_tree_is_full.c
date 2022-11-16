#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0, total = 0;

	if (!tree)
		return (0);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	total = l + r;
	return (total);
}
