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

Node * build()
{     
	  int num;
	  cin>>num;

	if(num==-1)
	{
		return NULL;
	}



      Node *root= new Node(num);
      root->left = build();
      root->right = build();

      return root;
}

void inorder(Node *root)
{

	 // time complexity :O(n)
	// space complecity :O(h)
     if(root == NULL)
     {
     	return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);

}

void preorder(Node *root)
{


	 // time complexity :O(n)
	// space complNecity :O(h) 


     if(root == NULL)
     {
     	return;
     }
          cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);

}

void postorder(Node *root)
{

	// time complexity :O(n)
	// space complecity :O(h)  


     if(root == NULL)
     {
     	return;
     }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";

}
int main()
{
    Node *root;
    root = build();

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);

	return 0;
}

