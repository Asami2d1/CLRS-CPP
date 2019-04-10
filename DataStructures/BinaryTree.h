#pragma once
#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__
namespace CLRS
{
	template<typename DataType>
	class TreeNode
	{
	private:
		DataType data;
	public:
		TreeNode *left, *right, *parent;
		TreeNode(DataType da);
		virtual ~TreeNode() = default;
		DataType GetData() { return this->data; }
		void ChangeData(DataType da) { this->data = da; }
	};
	
	template<typename DataType>
	class BinaryTree
	{
	public:
		//BinaryTree();
		BinaryTree(TreeNode<DataType> *rootNode);
		~BinaryTree() = default;
		enum WALK_ORDER { Preorder = 0, Inorder, Postorder };
		void TreeWalk(TreeNode<DataType> *x, WALK_ORDER order = Inorder);

	private:
		TreeNode<DataType> *root;
	};

}
#include "BinaryTree.cpp"
#endif // !__BINARYTREE_H__

