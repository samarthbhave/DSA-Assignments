#include<iostream>
using namespace std;

int main()
{
int n, a = 0, b = 1, fibo = 0;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << a << ", ";
            continue;
        }
        if(i == 2) {
            cout << b << ", ";
            continue;
        }
        fibo = a + b;
        a = b;
        b = fibo;

        cout << fibo << ", ";
    }
    return 0;
}
