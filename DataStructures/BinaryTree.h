#pragma once
#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__
namespace CLRS
{
	enum WALK_ORDER { Preorder = 0, Inorder, Postorder };

	template<typename DataType>
	class TreeNode
	{
	private:
		DataType data;
	public:
		TreeNode *left, *right, *parent;
		TreeNode();
		TreeNode(DataType da);
		virtual ~TreeNode() = default;
		DataType GetData() { return this->data; }
		void SetData(DataType da) { this->data = da; }
	};
	
	template<typename DataType>
	class BinaryTree
	{
	public:
		BinaryTree() = default;
		BinaryTree(TreeNode<DataType> *rootNode);
		~BinaryTree() = default;
		void TreeWalk(TreeNode<DataType> *x, WALK_ORDER order = Inorder);

	protected:
		TreeNode<DataType> *root;
	};

}
#include "BinaryTree.cpp"
#endif // !__BINARYTREE_H__

