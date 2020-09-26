#include <iostream>
using namespace std;
int main ()
{
int sales, bonus;
double commissionRate; 
cout << "If you enter the value of sales more than or equal to 50,000 then commision rate will be 0.25 and bonus will be 250" << endl;
cout << "what is the sales value? " << endl; 
cin >> sales;
if (sales >= 50000)
  bonus = 250;
  commissionRate = 0.25;
if (sales < 50000)
  bonus = 0;
  commissionRate = 0;
cout << "The commission rate is " << commissionRate << " and the bonus is " << bonus  << "." << endl;
return 0;
}
