#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;

struct Node  
{   
    int data;  
    struct Node* next;  
};  
struct Node *FRONT = NULL;
struct Node *REAR = NULL;
struct Node *t = NULL;
int count =0;
bool IsEmpty(){
	if( FRONT == NULL )
		return true; 
	else return false; }



void enqueue(int item){
	struct Node *NewNode;
	NewNode = new (Node);
	
	NewNode->data = item;
	NewNode->next = NULL;
	if (REAR == NULL){
		REAR  = NewNode  , FRONT = NewNode ;
		
	}else {REAR -> next = NewNode ; REAR = NewNode; }
	count++;
	return;
}

int dequeue(){
	if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return -1; }
	int a = FRONT->data;
	t = FRONT;
	if(REAR == FRONT){
		
		FRONT =  NULL;
		REAR  = NULL;
		delete t;
	}else {FRONT = FRONT ->next; delete t;}
	count--;
	return a;
}

void TRAVERSE(){
	if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return; }
	struct Node *F = FRONT;
		while(F != NULL){
			cout<<"one value of queue : "<< F->data<<"\n";
			F = F->next;
		}
	return;
}

void serach(int item){	
	if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return; }		
	struct Node *F = FRONT;		
	int found = 0;		
	while(F != NULL){			
		if (item == F->data){	cout << "the vaule : "<<F->data <<"is found in the queue";		found =1;	break;}			
		
		else F = F->next;
	}	
	if (found == 0){cout<<"value deosn't exist";}
}	


int maidien(){
	t = FRONT;
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
int main()
{
	int choice,ITEM;
	while(1)
	{
		cout<<"\n\n\n\n QUEUE operation\n\n";
		cout<<"1-insert value \n2-deleted value\n";
		cout<<"3-Traverse QUEUE \n4-search\n5-get mid\n6-exit\n\n";
		cout<<"\t\t your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\n put a value:";
				cin>>ITEM;
				enqueue(ITEM);
			break;
			case 2:
				ITEM = dequeue();
				if(ITEM != - 1)cout<<ITEM<< " deleted \n";
			break;
			case 3:
				cout<<"\n queue state\n";
				TRAVERSE(); 
			break;
			case 4:
				cout<<"\n put a value:";
				cin>>ITEM;
				serach(ITEM);
				break;
			case 5:
				maidien();
				break;
			case 6:
				exit(0);
		} // end of switch
	} // end of while loop
return 0;
}// end of main( ) function

