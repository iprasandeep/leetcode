#include<iostream>
#include<stdio.h>
#include "QueueCpp.h"

using namespace std;
class Tree
{
	Node *root;
	public: 
		Tree(){root=NULL;}
		void CreateTree();
		void Preorder(){Preorder(root);}
		void Postorder(){Postorder(root);}
		void Postorder(Node *p);
		void Inorder(){Inorder(root);}
		void Levelorder(){Levelorder(root);}
		void Levelorder(Node *p);
		int Height(){return Height(root);}
		int Height(){return Height(root);}
		int Height(Node *root);
};

void Tree::CreateTree()
{
	Node *p, *t;
	int x;
	Queue q(100);
	cout<<"Enter the root value: ");
	cin >> x;
	root -> new Node;
	root->data=x;
	root->lchild=root->rchild==NULL;
	q.enqueue(root);
	
	
	while(!q.isEmpty())
	{
		p = q.dequeue();
		cout<<"Enter the left child of"<<p->data<<" :";
		cin >> x;
		if(x!=-1)
		{
			t = new Node;
			t->data = x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
			
		}
		cout<<"Enter the right child of"<<p->data<<" :";
		cin >> x;
		if(x!=-1)
		{
			t = new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}
	}
}

void Tree::Preorder(struct Node *p)
{
if(p)
{
	cout<<p->data<<"\n";
	
	
}
}
