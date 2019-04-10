#include "BinarySearchTree.h"
#include "BinaryTree.h"
#include <iostream>
#include <cstdlib>
using namespace CLRS;

int main()
{
	int tmp;
	std::cin >> tmp;
	TreeNode<int> *rootNode = new TreeNode<int>(tmp);
	BinarySearchTree<int> *tree = new BinarySearchTree<int>(rootNode);
	TreeNode<int> *Nodes = new TreeNode<int>[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> tmp;
		Nodes[i].SetData(tmp);
		tree->Insert(&Nodes[i]);
	}
	tree->TreeWalk(rootNode, Inorder);
	system("pause");
	return 0;
}