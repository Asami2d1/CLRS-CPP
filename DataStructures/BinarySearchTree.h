#pragma once
#ifndef __BINARYSEARCHTREE_H__
#define __BINARYSEARCHTREE_H__
#include "BinaryTree.h"
namespace CLRS
{
	template<typename DataType>
	class BinarySearchTree :
		public BinaryTree<DataType>
	{
	public:
		BinarySearchTree();
		BinarySearchTree(TreeNode<DataType> *rootNode);
		~BinarySearchTree() = default;
		TreeNode<DataType> *Search(TreeNode<DataType> *x, DataType key);
		TreeNode<DataType> *SearchIter(TreeNode<DataType> *x, DataType key);
		TreeNode<DataType> *Minimum(TreeNode<DataType> *x = root);
		TreeNode<DataType> *Maximum(TreeNode<DataType> *x = root);
		TreeNode<DataType> *Successor(TreeNode<DataType> *x);
		TreeNode<DataType> *Predecessor(TreeNode<DataType> *x);
		void Insert(TreeNode<DataType> *newNode);
	private:
		TreeNode<DataType> *root;
	};

}

#include "BinarySearchTree.cpp"
#endif