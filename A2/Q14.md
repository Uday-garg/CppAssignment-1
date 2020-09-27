In the following code, when entering the given values the output will be:-
```cpp
#include <iostream>
using namespace std;
int main ()
{
int numBooks, numCoupons;
cout << "How many books are being purchased? ";
cin >> numBooks;
if (numBooks < 1)
  numCoupons = 0;
else if (numBooks < 3)
  numCoupons = 1;
else if (numBooks < 5)
  numCoupons = 2;
else
  numCoupons = 3;
  cout << "The number of coupons to give is " << numCoupons << endl;
return 0
}
```
  
  For 1 the umber of coupons is 1.
 
  For 3 the umber of coupons is 2.
  
  For 4 the umber of coupons is 2.
  
  For 5 the umber of coupons is 3.
  
  For 10 the umber of coupons is 3.
