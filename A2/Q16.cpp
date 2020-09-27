#include <iostream>
using namespace std;
int main ()
{
int speed;
cout << "What speed are you driving at?" << endl;
cin >> speed;
if (speed < 0)
  cout << "please try again";
else if (speed > 200)
  cout <<  "please try again";
else 
  cout << "The number is valid"; 
return 0;
}
