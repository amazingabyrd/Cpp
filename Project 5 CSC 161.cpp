#include <iostream>
#include "binarySearchTree.h"
#include "stdafx.h"

using namespace std;



int main()
{
//Create a bSearchTreeType object example: bSearchTreeType<int> treeRoot;
//Create Variable to hold the users numbers
//Prompt the user for numbers
//Continue prompting until user enters "-999 example while(num != -999)
// insert nodes into tree treeRoot.insert(num);
// Print Nodes in inorder sequence treeRoot.inorderTraversal();
//Print Nodes in preorder sequence treeRoot.preorderTraversal();
// Print Nodes in postorder sequence treeRoot.postorderTraversal();
// Tree Height: treeRoot.treeHeight() 
// Number of nodes:  treeRoot.treeNodeCount() 
// Number of leaves: treeRoot.treeLeavesCount() 
	bSearchTreeType<int> treeRoot;
	int num;
	cout << "Enter integers ending with -999" << endl;
	cin >> num;
	while (num != -999)
	{
		treeRoot.insert(num);
		cin >> num;
	}
	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();
	cout << endl << "Tree nodes in preorder: ";
	treeRoot.preorderTraversal();
	cout << endl << "Tree nodes in postorder: ";
	treeRoot.postorderTraversal();
	cout << endl;
	cout << "Tree Height: " << treeRoot.treeHeight() << endl;
	cout << "Number of Nodes: " << treeRoot.treeNodeCount() << endl;
		return 0;
}

