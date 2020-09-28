The output from the following code will be: -

```cpp
#include <iostream>
using namespace std;
int main()
{
  int integer1, integer2;
  double result;
  integer1 = 19;
  integer2 = 2;
  result = integer1 / integer2;
  cout << result << endl;
  result = static_cast<double>(integer1) / integer2;
  cout << result << endl;
  result = static_cast<double>(integer1 / integer2);
  cout << result << endl;
  return 0;
}
```
The output is: - 

9

9.5

9
