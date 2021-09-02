#include <iostream>
#include <math.h>

using namespace std;
void PRINT (int arr[] , int a){
for (int i = 0 ; i < a ; i++){
    cout << arr[i] << " , ";
}
}
void ASCSORT(int array[], int size){
     int temp;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if( array[j] > array[j+1])
            {
                swap(array[j] , array[j+1]);
            }
         }
   }
}

void DECSORT(int array[], int size){
    int i, j, temp;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            if( array[j] < array[j+1])
            {
                swap(array[j] , array[j+1]);
            }}}}
void EVENNUM (int array[] , int size){
    for (int i = 0 ; i < size ; i++){
        if (array[i]%2 == 0){
            cout << array[i] << " , ";
        }
    }
}

void ODDNUM (int array[] ,int size){
    for (int i = 0 ; i < size ; i++){
        if (array[i]%2 != 0){
            cout << array[i] << " , ";
        }}}
void PRIMENUM (int array[] , int size){
int p;
for(int i=0;i<size;i++)
    {
        if(array[i]>1)
        {
            p=1;
            for(int c=2;c<array[i];c++)
            {
                if(array[i]%c==0)
                {
                    p=0;
                    break;
                }}}
        if(p==1)
        {
    		cout<<array[i]<<" , ";
        }
    }
}
void Perfect_Squares(int array[] , int size){

    for (int i = 0; i < size; i++) {
    if (sqrt(array[i]) == (int)sqrt(array[i])){
    cout << array[i] << " , ";
    }
}}

int main()
{
    int size ;
    cout << "please Enter the size of the array : " ;
    cin >> size ;
    int array[size];
    for (int i = 0 ; i < size ; i++){
        cout << "Enter Element Number " << i+1 << " :" ;
        cin >> array[i];
    }

    cout <<"\n\n" ;
	DECSORT(array , size);
    cout << "decending sort : \t " ;
    PRINT(array , size);
    cout << "\n";
    cout << " ascending sort : \t " ;
    ASCSORT(array , size);
	PRINT(array , size);
    cout << "\n\n";
    cout << "Odd  : \t ";
    ODDNUM(array , size);
    cout << "\n\n";
    cout << "Even  : \t ";
    EVENNUM(array , size);
    cout << "\n\n";
    cout << "Prime  : \t ";
    PRIMENUM(array , size);
    cout << "\n\n";
   cout <<"Perfect Square  : \t " ;
    Perfect_Squares(array , size);
    cout <<"\n\n\n" ;

    return 0;
}
