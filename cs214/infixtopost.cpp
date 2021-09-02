// Conversion Infix Expression into Post-fix
// NOTE: ^ is used for raise-to-the-power
#include<iostream>
#include<cstring>
using namespace std;
int Top = -1;
char Q[100],P[100],Stack[100]; //Q is infix and P is Postfix array
int n=0; // used to count item inserted in P
 
void Push(char ch) { Stack[++Top] = ch; }
char Pop( ) { return Stack[Top--];}
char Peak( ) { return Stack[Top]; }
int main()
{ int k,i;
 cout<<"Put an arithematic INFIX _Expression\n\n\t\t";
 cin.getline(Q,99); // Function gets infix expression into Q as string
 k=strlen(Q); // it calculates the length of Q and store it in k
 // following two lines will do initial work with Q and stack
 strcat(Q,")"); // This function add ) at the and of Q
Push('('); // This statement will push first ( on Stack )
 while(Top!= -1)
 {for(i=0;i<=k;i++)
 {
 switch(Q[i])
 {case '+':
 case '-':
 while(1)
 { if(Peak()!= '(' ) { P[n++]=Pop(); }
 else break;
 }
 Push(Q[i]); break;
 case '*':
 case '/':
 case '%':
 while(1)
 {if(Peak() == '(' || Peak() == '+' || Peak() == '-') break; 
 else
P[n++]=Pop(); 
 }
 Push(Q[i]); break;
 case '^':
 while(1)
 { if( Peak() =='(' || Peak() =='+' ||
 Peak() =='-' || Peak() =='/' ||
Peak() =='*' || Peak() =='%') break;
 else
 P[n++]= Pop();
 }
 Push(Q[i]);
 break;
case '(':
 Push(Q[i]);
 break;
 case ')':
 while(1)
 {
 if(Stack[Top]=='(' ) {Top--; break;}
 else { P[n++]=Pop(); }
 }
 break;
 default : // it means that read item is an operand
 P[n++]=Q[i];
} //END OF SWITCH
 } //END OF FOR LOOP
 } //END OF WHILE LOOP
P[n]='\0'; // this statement will put string terminator at the
 // end of P which is Postfix expression 
cout<<"\n\n POSTFIX EXPRESION IS \n\n\t\t"<<P<<endl;
return 0;
} //END OF MAIN FUNCTION
