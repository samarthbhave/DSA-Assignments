#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a Year: " << endl;
    cin >> year;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        cout << "Entered year " << year << " is a leap year" << endl;
    else
        cout << "Not a leap year" << endl;
    return 0;
}

