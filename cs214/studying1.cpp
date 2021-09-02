#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;

int count = 0;
struct Node{
	int data;
	struct Node * next;
};
struct Node* newnode;
struct Node* head;
void in(int item){

	newnode = new(Node);
	newnode->data = item;
	newnode->next = head;
	head = newnode;
	
	count++;
	
}
void print(){
	struct Node * newnode = new(Node);
	while(head !=NULL){
		cout<<"data : "<<head->data<<"\n";
		head = head->next;
	}
}
void search(int item){
	int found =0;
	struct Node * new1 = head;
	while (new1 !=NULL){
		
		if (item == new1->data){
			cout<<"found : " <<new1->data <<" in the list\n";
			found =1;
			break;
		} else new1 = new1->next;
	}
	if(found ==0){
		cout<<"item doesn't exist";
	}
}
void bef(){
	struct Node* front2 = head;
	struct Node* curr;
	curr = head;
	while(front2!=NULL){
		front2=front2->next;
		if(front2->next == NULL){
		break;}
		else {curr = curr->next;}
	}
		cout<<"datr"<<curr->data;
}
int main(){
	int item;
	int ch;

	while(1){
	cout<<"1-en\n2-pr\n3-be";
	cin>>ch;
	
	switch(ch){

	case 1:
	for(int i = 0; i<5; i++){
		cout<<"enter item : ";
		cin>>item;
		in(item);
	}
	
	break;
	case 2:
		print();
	break;
	case 3:
		bef();
		break;
	
	 	
}
}}


