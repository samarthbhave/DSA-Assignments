#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st number" << endl;
    cin >> a;
    cout << "Enter 2nd number" << endl;
    cin >> b;
    cout << "Enter 3rd number" << endl;
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "Largest Number is: " << a << endl;
    }
    if (b >= a && b >= c)
    {
        cout << "Largest Number is: " << b << endl;
    }
    if (c >= b && c >= a)
    {
        cout << "Largest Number is: " << c << endl;
    }
    return 0;
}
