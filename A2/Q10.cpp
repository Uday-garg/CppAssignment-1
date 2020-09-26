#include <iostream>
using namespace std;
int main ()
{
int x, y;
cout << "If you enter the value of x as 20 y will be 0 otherwise it will be randomy chosen." << endl;
cout << "what is the value of x? " << endl; 
cin >> x;
if (x == 20)
  y = 0;
  cout << "The value of y is " << y << "." << endl;
return 0;
}
