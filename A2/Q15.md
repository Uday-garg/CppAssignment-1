The solution can be found out using the following code: -
```cpp
#include <iostream>
using namespace std;
int main ()
{
int a = 2, b = 4, c = 6;
cout << "The solution for line 1 is :- " << (a == 4 || b > 2) <<endl;
cout << "The solution for line 2 is :- " << (6 <= c && a > 3) <<endl;
cout << "The solution for line 3 is :- " << (1 != b && c != 3) <<endl;
cout << "The solution for line 4 is :- " << (a >= -1 || a <= b ) <<endl;
cout << "The solution for line 5 is :- " << (!(a > 2)) <<endl;
return 0;
}
```

And the solution comes as follows: -
The solution for line 1 is :- 1
The solution for line 2 is :- 0
The solution for line 3 is :- 1
The solution for line 4 is :- 1
The solution for line 5 is :- 1
