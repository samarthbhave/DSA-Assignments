#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;
    return 0;
}
