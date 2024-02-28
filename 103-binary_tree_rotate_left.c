تم استخدام 97‎%‎ من مساحة التخزين … إذا نفدت مساحة التخزين، لن يكون بإمكانكَ إنشاء الملفات أو تعديلها أو تحميلها. استفِد من مساحة تخزين بسعة 100 غيغابايت مقابل ‏9.99 TRY‏ ‏2.99 TRY شهريًا لمدة 3 أشهر.
#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivot = tree->right;
	tmp = pivot->left;
	pivot->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = pivot;
		else
			tmp->right = pivot;
	}

	return (pivot);
}
