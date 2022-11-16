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
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
