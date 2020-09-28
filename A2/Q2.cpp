  The old code has some problems like not announcing what to do: -\
```cpp
#include <iostream>
using namespace std;
int main()
{
double first, second, product;
cin >> first >> second;
product = first * second;
cout << product;
return 0;
}
```

The corrected code that gives more information is as follows: -


```cpp
#include <iostream>
using namespace std;
int main()
{
cout << "This program askes for two numbers and then multiplies them to give out the result." << endl;
double first, second, product;
cout << "Please enter the first number" << endl;
cin >> first 
cout << "Please enter the second number" << endl;
cin >> second;
product = first * second;
cout << "The product of the two numbers is: - " product;
return 0;
}
```
