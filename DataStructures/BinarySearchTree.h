#pragma once
#include "BinaryTree.h"
namespace CLRS
{
	template<typename DataType>
	class BinarySearchTree :
		public BinaryTree<DataType>
	{
	public:
		BinarySearchTree();
		~BinarySearchTree() = default;
	};

}