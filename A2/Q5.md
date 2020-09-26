The values of the given expressions are; -

```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a = 5, b = 12;
  double x = 3.4, z = 9.1;
  cout << "A is " << b/a <<endl;
  cout << "B is " << x*a <<endl;
  cout << "C is " << static_cast<double>(b / a) <<endl;
  cout << "D is " << static_cast<double>(b) / a <<endl;
  cout << "E is " << b / static_cast<double>(a) <<endl;
  cout << "F is " << static_cast<double>(b) / static_cast<double>(a) <<endl;
  cout << "G is " << b / static_cast<int>(x) <<endl;
  cout << "H is " << static_cast<int>(x) * static_cast<int>(z) <<endl;
  cout << "I is " << static_cast<int>(x * z) <<endl;
  cout << "J is " << static_cast<double>(static_cast<int>(x) * static_cast<int>(z)) <<endl;
}
```
