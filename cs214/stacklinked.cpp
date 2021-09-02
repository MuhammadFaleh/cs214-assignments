#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;



struct Node  
{   
    int data;  
    struct Node* next;  
};  
struct Node *top = NULL;
struct Node *t = NULL;

int count = 0;

void push(int item)
{  

	struct Node *NewNode;
	NewNode = new (Node);
	
	NewNode->data = item;
	NewNode->next = top;
	t = top;
	top = NewNode;
	count++;
}  




int pop(int item){
	if (top == NULL){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	item = top->data;
	t = top;
	top = top->next;
	free(t);
	count--;
	return item;
	
}

int peak(int item){
	if (top == NULL){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	item = top->data;
	return item;
}

int treverse(){
	if (top == NULL){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	t = top;
	cout<<"-------------------------------------------------"; 
	cout<<"\nData\t\t Link\n\n"; 
	while(t !=NULL){
		cout<<t->data<<"\t\t "<<t->next<<"\n";
		t = t->next;
	}
}

bool IsEmpty(){ 
	if(top == NULL) 
		return true; 
	else return false; 
	}

int maidien(){
	t = top;
	int mid = (count/2);
	while(t !=NULL){
		count--;
		if(count == mid){
			cout<<"\nthe middle element is = "<<t->data;
			break;
		}
		t = t->next;
		
		
	}
	
}




int main (){ 
	struct NODE *T;
	int item, choice;
	while(1){
		cout<< "\n\n\n\n\n";
		cout<< " ******* STACK OPERATIONS ********* \n\n";
		cout<< " 1- Push item \n 2- Pop Item \n";
		cout<< " 3- Peak (Top Item) \n 4- Traverse / Display Stack Items \n";
		cout<< " 5- get middle \n 6- Exit.";
		cout<< " \n\n\t Your choice ---> ";
		cin>> choice;
		switch(choice){ 
			case 1:
				cout<<"\nPut a value: ";
				cin>>item;
				push(item);
				break;
			case 2:
				if(IsEmpty()) {cout<<"\n\n Stack is Empty\n";
				break;
				}
				item = pop(item);
				cout<< item <<"\n\n has been deleted \n";
				break;
			case 3:
				if(IsEmpty()) {cout<<"\n\n Stack is Empty\n";
				break;
				}
				cout<< peak(item) <<"\n\n is on the Peak \n";
				break;
			case 4:
				if(IsEmpty()) {cout<<"\n\n Stack is Empty\n";
				break;
				}
				treverse();
				break;
			case 5:
				maidien();
				break;
			case 6:
				exit(0);
} // end of switch block
} // end of loop
	return 0;
} // end of main function

