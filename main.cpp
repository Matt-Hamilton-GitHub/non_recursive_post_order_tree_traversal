 
#include <iostream>
#include "binarySearchTree.h"
using namespace std;

int main() 
{

	bSearchTreeType<int> tree;
    tree.insert(1);
	tree.insert(11);
	tree.insert(10);
	tree.insert(5);
	tree.insert(33);
	tree.insert(4);
	
	cout << "Postorder Recursive" << endl;
	tree.postorderTraversal();
	cout<< endl;
	cout << "Postorder Non Recursive" << endl;
	tree.nonRecursivePostTraversal();

	system("pause");
	return 0;
}  