#include "BinaryTree.h"
#ifndef __BINARYTREE_CPP__
#define __BINARYTREE_CPP__

namespace CLRS
{
	template<typename DataType>
	inline TreeNode<DataType>::TreeNode(DataType da)
	{
		this->data = da;
		this->left = nullptr;
		this->right = nullptr;
		this->parent = nullptr;
	}

	template<typename DataType>
	BinaryTree<DataType>::BinaryTree(TreeNode<DataType>* rootNode)
	{
		this->root = rootNode;
	}

	template<typename DataType>
	inline void BinaryTree<DataType>::TreeWalk(TreeNode<DataType>* x, WALK_ORDER order)
	{
		switch (order)
		{
		case Preorder:
			if (x != nullptr)
			{
				std::cout << x->GetData();
				TreeWalk(x->left, order);
				TreeWalk(x->right, order);
			}
			break;
		case Inorder:
			if (x != nullptr)
			{
				TreeWalk(x->left, order);
				std::cout << x->GetData();
				TreeWalk(x->right, order);
			}
			break;
		case Postorder:
			if (x != nullptr)
			{
				TreeWalk(x->left, order);
				TreeWalk(x->right, order);
				std::cout << x->GetData();
			}
			break;
		}
	}

}
#endif // !__BINARYTREE_CPP__