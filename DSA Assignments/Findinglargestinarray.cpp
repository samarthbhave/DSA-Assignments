#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int size,i;
    int arr[100];
    int large=0, secondLarge=0;

    cout << "Enter the number of element in array: ";
    cin >> size;
    for(i=0; i<size; i++)
    {
        cout << "Enter the array element" <<i+1<< ": ";
        cin >> arr[i];
        if(large<arr[i])
           {
               secondLarge=large;
               large=arr[i];
           }
        else if(secondLarge<arr[i])
        {
               secondLarge=arr[i];
        }
    }
    cout << "\n";
    cout << ""<< large << " is a largest nunber\n";
    cout << secondLarge << " is a second largest nunber";
    getch();
    return 0;
}
