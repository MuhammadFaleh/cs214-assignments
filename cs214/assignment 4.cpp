#include<iostream>
using namespace std;

void printAscending(int arr[], int n) {
    int hold;
    for (int i = 0; i < n; i++)
        for (int j = 1 + i; j < n; j++)
            if (arr[j] < arr[i]) {
                hold = arr[j];
                arr[j] = arr[i];
                arr[i] = hold;
            }
    cout << "\nArray sorted ascending:";
    for (int i = 0; i < n; i++)
        cout << "\t" << arr[i];
}

void printDescending(int arr[], int n) {
    int hold;
    for (int i = 0; i < n; i++)
        for (int j = 1 + i; j < n; j++)
            if (arr[j] > arr[i]) {
                hold = arr[j];
                arr[j] = arr[i];
                arr[i] = hold;
            }
    cout << "\nArray sorted descending:";
    for (int i = 0; i < n; i++)
        cout << "\t" << arr[i];
}

void printEven(int arr[], int n) {
    cout << "\nEven element in array:";
    for (int i = 0; i < n; i++)
        if (arr[i]%2==0)
            cout << "\t" << arr[i];
}

void printOdd(int arr[], int n) {
    cout << "\nOdd element in array:";
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 1)
            cout << "\t" << arr[i];
}

void printPrime(int arr[], int n) {
    cout << "\nPrime element in array:";
    for (int i = 0; i < n; i++)
        if (arr[i] != 1 )
            if (arr[i] % 2 != 0 || arr[i] % 3 != 0 || arr[i] <= 3)
                cout << "\t" << arr[i];
}

void printCompleteSquare(int arr[], int n) {
    int large = arr[0];
    for (int i = 1; i < n; i++) 
        if (arr[i] > large) 
            large = arr[i];

    cout << "\nComplete square element in array:";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < large; j++)
            if (arr[i] == j*j)
                cout << "\t" << arr[i];
}

int main() {
    int ch, m, n, * array;
    cout << "Enter Number of elemnt: \n";
    cin >> n;
    array= new int [n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element number " << i << ": ";
        cin >> m;
        array[i]= m;
    }
    

	while (1) {
		cout << "\n\n";
		cout << "\t1- Print all element in Array\n";
		cout << "\t2- Print all elements in Array sorted ascending\n";
		cout << "\t3- Print all elements in Array sorted descending\n";
        cout << "\t4- Print even elements in Array\n";
        cout << "\t5- Print odd elements in Array\n";
        cout << "\t6- Print prime elements in Array\n";
        cout << "\t7- Print complete square elements in Array\n";
        cout << "\t8- exit\n\n";
		cout << "\n\t\tyour choice :";
		cin >> ch;
		switch (ch) {
		case 1:
            cout << "\n\nArray:";
            for (int i = 0; i < n; i++)
                cout << "\t" << array[i];
			break;
		case 2:
            printAscending(array, n);
			break;
		case 3:
            printDescending(array, n);
            break;
        case 4:
            printEven(array, n);
            break;
        case 5:
            printOdd(array, n);
            break;
		case 6:
            printPrime(array, n);
            break;
        case 7:
            printCompleteSquare(array, n);
            break;
        case 8:
            exit(0);
        default: cout << "\nInvalid choice\n";
		}
	}
}