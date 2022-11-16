#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance -  measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: balance factor or NULL if tree is empty
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree)
	{
		if (tree->left)
		{
			h_left = binary_tree_balance(tree->left) + 1;
		}
		if (tree->right)
		{
			h_right = binary_tree_balance(tree->right) + 1;
		}
		return (h_left - h_right);
	}
	return (0);
}
