#include<iostream>
using namespace std;

int main()
{
 int a, i, b = 0, flag = 0;
  cout << "Enter a number: ";
  cin >> a;
  b = a / 2;
  for(i = 2; i <= b; i++)
  {
      if(a % i == 0)
      {
          cout << "The number is not prime number!" << endl;
          flag = 1;
          break;
      }
  }
  if (flag == 0)
      cout << "The number is a prime number!" << endl;
  return 0;
}
