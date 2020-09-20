#include <iostream>
using namespace std;
int main()
{
number = 62.7;
double number;
cout << number << endl;
return 0;
}
In this the 6th line should come before the 5th line as we have to declare the variable "number" before using it.
Like - 
  #include <iostream>
  using namespace std;
  int main()
  {
  double number;
  number = 62.7;
  cout << number << endl;
  return 0;
  }
