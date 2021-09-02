#include <iostream>
using namespace std;
const int stacksize = 5;
int i =0;
int top = -1;
int ar[stacksize];
int count = 0;

int push(int item){

	if (top == stacksize -1){
		cout<<"overflow / stackfull\n";
		return 0;
	}
	
	top++;
	count++;

	ar[top] = item;

}

int pop( int item){
	if (top == -1){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	item = ar[top];
	cout<<"removed the item : "<< item<<"\n";
	top--;
	count--;

	
}
int peak( int item){
	if (top == -1){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	item = ar[top];
	cout<<"here is the top elment : "<<item;
}
int traverse(){
	int i =0;
	if (top == -1){
		cout<<"underflow/ stack is empty\n";
		return 0;
	}
	int t = top;
	while (t>=0){
		cout<<"elment number "<< i << " : " << ar[t]<<"\n";
		i++;
		t--;
	}
}
bool IsEmpty(){ 
	if(top == -1 ) 
		return true;
	else return false; 
	}
bool IsFull(){ 
	if(top == stacksize-1)
		 return true; 
		 else return false; 
		 }

int maidien(){
	int middle = (count/2);
	cout<<"the middle is = " << middle <<"\t\t and the middle element is = "<<ar[middle];
}
int main( )
	{ int item, choice ;
	while( 1 )
	{
		cout<< "\n\n\n\n\n";
		cout<< " ******* STACK OPERATIONS ********* \n\n";
		cout<< " 1- Push item \n 2- Pop Item \n";
		cout<< " 3- Peak (Top Item) \n 4- Traverse / Display Stack Items \n";
		cout<< " 5- get middle\n6- Exit.";
		cout<< " \n\n\t Your choice ---> ";
		cin>> choice;
			switch(choice)
			{ case 1: if(IsFull())cout<< "\n Stack Full/Overflow\n";
			else
			{ cout<< "\n Enter a number: "; cin>>item;
			push(item); }
			break;
			case 2: if(IsEmpty())cout<< "\n Stack is empty) \n";
			else
			{pop(item);
			cout<< "\n deleted from Stack = "<<item<<endl;}
			break;
			case 3: if(IsEmpty())cout<< "\n Stack is empty) \n";
			else
			{peak(item);
			cout<< "\n Peak of Stack (Top) = "<<item<<endl;}
			break;
			case 4: if(IsEmpty())cout<< "\n Stack is empty) \n";
				else
				{ cout<< "\n List of Item pushed on Stack:\n";
				traverse();
			}
			break;
			case 5:
				maidien();
				break;
			case 6: exit(0);
			default:
		cout<< "\n\n\t Invalid Choice: \n";
	} // end of switch block
	} // end of while loop
	} // end of of main() function

