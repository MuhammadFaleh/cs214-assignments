#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;

int const QSIZE = 10;

int QUEUE[QSIZE];
int FRONT = -1;
int REAR = -1;
int count =0;
bool IsEmpty(){
	if( FRONT == -1 )
		return true; 
	else return false; }

bool IsFull(){ 
	if((FRONT == 0 && REAR == QSIZE - 1 )|| (REAR + 1 == FRONT)){
	return true;
	}else return false;
}



void enqueue(int ITEM){
	if(IsFull()) { cout<< "\n QUEUE is full\n"; return;}
	if (REAR == -1){
		FRONT = 0; REAR = 0;
	}else if(REAR == QSIZE -1){
		REAR =0;
	}else REAR = REAR + 1;
	
	QUEUE[REAR] = ITEM;
	count++;
}

int dequeue(){
	if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return -1; }
	int t = QUEUE[FRONT];
	if(REAR == FRONT){
		FRONT = -1;
		REAR  = -1;
	}else if (FRONT == QSIZE -1){
		FRONT =  0;
	}else FRONT = FRONT + 1;
	count--;
	return t;
}


void TRAVERSE(){
	if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return; }
	int F;
	F = FRONT;
		while(F != -1){
			cout<<"one value of queue : "<< QUEUE[F]<<"\n";
			if(F == QSIZE - 1){
				F = 0;
			}else if(F == REAR){
				F = -1;
			}else F++;
		}
}

void serach(int item){	

if(IsEmpty()) { cout<<"\n\nQUEUE is empty\n"; return; }		

int F = FRONT;		

int found = 0;		

while(F != -1){			

if (item == QUEUE[F]){	cout << "the vaule : "<<QUEUE[F] << "\t\tin the index : " <<F;		found =1;	break;}			

if(F == QSIZE - 1){	F = 0;}

else if(F == REAR){F = -1;}

else F++;}		

if (found == 0){cout<<"value deosn't exist";}}

int maidien(){
	int middle = (count/2);
	cout<<"the middle index is = " << middle <<"\t\t and the middle element is = "<<QUEUE[middle];
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

