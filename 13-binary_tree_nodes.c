#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * with atleast i child
 * @tree: pointer to the root node of the tree to count
 * the number of nodes
 *
 * Return: size or NULL if tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_no_node = 0, r_no_node = 0, total_no_node = 0;

	if (!tree)
		return (0);
	if ((tree->left || tree->right) && tree->parent)
		return (1);
	if (tree->left || tree->right)
	{
		l_no_node = binary_tree_nodes(tree->left) + 1;
		r_no_node = binary_tree_nodes(tree->right);
		total_no_node = l_no_node + r_no_node;
		return (total_no_node);
	}
	return (total_no_node);
	}
