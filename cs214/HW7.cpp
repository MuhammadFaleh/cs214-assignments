#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;  
  

struct Node  
{   
    int data;  
    struct Node* link;  
};  
  

void newnode(struct Node** headPtr, int Ndata) //this function takes the ptr to ptr of the head and a data value to create a node and put it in the front of the list 
{  

    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node)); //to alloctate memory for the node and give the new_node the pointer to the first node
    new_node->data = Ndata; //store the new number 
    new_node->link = (*headPtr); //store the new link to the new number
    (*headPtr) = new_node; // moves the head to the new node  
}  
  

int search(struct Node* head, int key)  
{  
	int save;
    Node* current = head; // Initialize current  and give it the value of the head
    while (current != NULL)  
    {  
        if (current->data == key){
        	
        	cout<<"the value : "<<key <<"  is found with the link : "<<current;
        	return 0;
		} //if the current data is the same as the key print it and the link
        current = current->link;  
    }  
    Node* current2 = head;
    cout<<"\n\nthe value : " <<key <<"  is not found in this linked list \n--------------------------------"; 
	cout<<"\nData\t\t Link\n\n"; 
    while(current2 !=NULL){
    	cout<<current2->data<<"\t\t " <<current2<<"\n";
    	current2 = current2 ->link;
	} 
	return 0;
}  
print(struct Node* head){
	cout<<"\nData\t\t Link\n\n"; 
	Node* current2 = head;
    while(current2 !=NULL){
    	cout<<current2->data<<"\t\t " <<current2<<"\n";
    	current2 = current2 ->link;
	} 
}
int sort(struct Node* head){
	int temp;
	struct Node* current = head , *newlink = NULL;
	
	if(head == NULL){
		cout<<"the list is sorted";
		return 0;
	}
	else{
		while(current != NULL) {  
            newlink = current->link; 
		while (newlink != NULL)  
    {  
	        if (current->data > newlink->data){
	        	temp = current->data;  
                        current->data = newlink->data;  
                        newlink->data = temp; 
			}
		newlink = newlink->link;
	
	}
	current = current->link;	
	
}}
}

int main()  
{  
	struct Node* head = NULL; 
	int key, choice;
	while(1){
		cout<< "\n";
		cout<< " ******* list op ********* \n\n";
		cout<< " 1- insert item \n 2- print";
		cout<< "\n 3- serach \n 4- exit";

		cout<< " \n\n\t Your choice ---> ";
		cin>> choice;
		switch(choice){ 
			case 1:
				   int size;
  				 	cout<<"type size : ";
  					cin>>size;
				  	int value;
				   	for(int i = 1; i<=size; i++){
				   		cout<<"type the "<< i <<" value : ";
				   		cin>> value;
				    	newnode(&head, value);  }
				break;
			case 2:
    			print(head);
				break;
			case 3:
				cout<<"enter the value you want to find";
				cin>>key;
				search(head ,key);
			case 4:
				exit(0);
    return 0;  
} }}
