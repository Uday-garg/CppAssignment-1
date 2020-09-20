# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp

*/ What's wrong with this program? /*
#include iostream
using namespace std;
int main();
}
int a, b, c \\ Three integers
a = 3
b = 4
c = a + b
Cout < "The value of c is %d" < C;


```

2. **What bug does the original code have?**
    It was not a bug, this is Q15 and it took me 5 mins to figure it out
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
    I did not know about the last "}" is necessary
4. **How to correct the bug?**
http://cpp.sh/4o7u6y
I used online visualizer tool to check my corrected code 
5. **The corresponding bug-free code or code snippet is:**

```cpp
// What's wrong with this program? 
#include <iostream>
using namespace std;
int main()
{
int a = 3;
int b = 4;
int c = a + b;
cout << "The value of c is " << c;

```

6. **What is the take-away message from this bug?**

--- The tske away is that I always have to remember to put closing brckets.

