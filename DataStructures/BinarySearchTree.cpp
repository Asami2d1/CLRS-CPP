#ifndef __BINARYSEARCHTREE_CPP__
#define __BINARYSEARCHTREE_CPP__
#include "BinarySearchTree.h"

namespace CLRS
{
	template<typename DataType>
	inline BinarySearchTree<DataType>::BinarySearchTree()
	{
		this->root = nullptr;
	}

	template<typename DataType>
	BinarySearchTree<DataType>::BinarySearchTree(TreeNode<DataType>* rootNode)
	{
		this->root = rootNode;
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::Search(TreeNode<DataType>* x, DataType key)
	{
		if (x == nullptr || key == x->GetData())
		{
			return x;
		}
		if (key < x->GetData())
		{
			return Search(x->left, key);
		}
		else
		{
			return Search(x->right, key);
		}
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::SearchIter(TreeNode<DataType>* x, DataType key)
	{
		while (x != nullptr && key != x->GetData())
		{
			if (key < x->GetData())
			{
				x = x->left;
			}
			else
			{
				x = x->right;
			}
		}
		return x;
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::Minimum(TreeNode<DataType>* x)
	{
		while (x->left != nullptr)
		{
			x = x->left;
		}
		return x;
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::Maximum(TreeNode<DataType>* x)
	{
		while (x->right != nullptr)
		{
			x = x->right;
		}
		return x;
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::Successor(TreeNode<DataType>* x)
	{
		if (x->right != nullptr)
		{
			return Minimum(x->right);
		}
		TreeNode<DataType> y = x->parent;
		while (y != nullptr && x == y->right)
		{
			x = y;
			y = y->parent;
		}
		return y;
	}

	template<typename DataType>
	inline TreeNode<DataType>* BinarySearchTree<DataType>::Predecessor(TreeNode<DataType>* x)
	{
		if (x.left != nullptr)
		{
			return Maximum(x->left);
		}
		TreeNode<DataType> y = x->parent;
		while (x != nullptr && x == y.left)
		{
			x = y;
			y = y.parent;
		}
		return y;
	}

	template<typename DataType>
	inline void BinarySearchTree<DataType>::Insert(TreeNode<DataType>* newNode)
	{
		TreeNode<DataType> *y = nullptr;
		TreeNode<DataType> *x = root;
		while (x != nullptr)
		{
			y = x;
			if (x->GetData() > newNode->GetData())
			{
				x = x->left;
			}
			else
			{
				x = x->right;
			}
		}
		newNode->parent = y;
		if (y == nullptr)
		{
			root = newNode;
		}
		else if (newNode->GetData() < y->GetData())
		{
			y->left = newNode;
		}
		else
		{
			y->right = newNode;
		}
	}
}

#endif