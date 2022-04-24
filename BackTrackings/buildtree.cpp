#include<iostream>
using namespace std;

struct Node{
   int data;
   Node *left;
   Node *right;

   Node(int d)
   {
	   data = d;
	   left=right=NULL;
   }   
};

void build(Node &root)
{     

	if(num==0)
	{
		root=NULL;
	}

	  int num;
	  cin>>num;


      root= new Node(num);
      build(root->left);
      build(root->right);
}
int main()
{
    Node *root=NULL;
    build(root);
	return 0;
}

