#ifndef _LL_H_
#define _LL_H_

#include <iostream>

using namespace std;


struct Node
{
	int data;
	struct Node * next;
	
	Node(int n):data(n) , next(nullptr)
	{
		cout << "\tNode "<< data << "is created.\n" ;
	}
	~Node()
	{
		if(next)
		{
			delete next;
			next = nullptr;
		}
		cout << "\tNode "<< data << "is destroyed.\n" ;
	}
};

struct list
{
	int size ;
	struct  Node * head;
	list(): head(nullptr),size(0)
	{
		cout << " \tList is created \n" ;
	}
	~list()
	{
		if(head)
		{
			delete head;
			head = nullptr;
		}
		cout << " \tList is destroyed \n" ;
	}
};

void creatlist(list * L)
{
	L = new list;
}


void append(list * L, int x)
{
	Node * n = new Node(x);
	n->next = L->head;
	L->head = n;
	L->size++;
}

int serve(list * l)
{
	Node * temp = l->head;
	int data =  l->head->data;
	l->head = l->head->next;
	delete temp;
	return data;
}

void disp_list(list * l)
{
	Node * temp = l->head ;
	while(temp)
	{
		cout <<"\t"<< temp->data << " -> " ;
		temp = temp->next;
	}
	cout << endl;

}

void recursion_reverse(list *L , Node *pivot)
{
	Node * curr = pivot;
	Node * next = pivot -> next;
	L->head = curr;
	if(next)
	{
		recursion_reverse(L,next);
		next->next = curr;
		curr->next = nullptr;
	}
}

bool Detect_loop(list *L)
{
	auto pivot = L->head;
	auto comp = L->head;
	while(pivot)
	{
		while(comp)
		{
			if (comp == pivot)
				return true;
			else
			{
				comp = comp->next;
			}
		}
		pivot = pivot->next;

	}
	return false;
}

#endif _LL_H_
