# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;

class Cylinder
{
private:
    double rad; //radius
    double hit; //height
public:
    
    void setDimensions(double r, double h)
    {
        rad = r;
        hit = h;
        }
    double getRadius() 
    {
        return rad;
        }
    double getHeight() 
    {
        return hit;
        }
    double getVolume() 
    {
        cout << (3.14159 * rad * rad * hit);
        }    
    
    };
    
int main()
{
    double x, y;
    cout << "Enter the radius of your cylinder \n";
    cin >> x;
    cout << "Enter the height of your cylinder \n";
    cin >> y;
    Cylinder volume;
    volume.setDimensions(x, y);
    volume.getVolume();
    }    

```

2. **What bug does the original code have?**

  getVolume function doesn't work

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

  I thought printing it in the function itself would make it work

4. **How to correct the bug?**

  Return it in the function and print it in the main area.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

class Cylinder
{
private:
    double rad; //radius
    double hit; //height
public:
    
    void setDimensions(double r, double h)
    {
        rad = r;
        hit = h;
        }
    double getRadius() 
    {
        return rad;
        }
    double getHeight() 
    {
        return hit;
        }
    double getVolume() 
    {
        return 3.14159 * rad * rad * hit;
        }    
    
    };
    
int main()
{
    double x, y;
    cout << "Enter the radius of your cylinder \n";
    cin >> x;
    cout << "Enter the height of your cylinder \n";
    cin >> y;
    Cylinder volume;
    volume.setDimensions(x, y);
    cout << volume.getVolume();
    }    

```

6. **What is the take-away message from this bug?**

  The take away from this bug is that I have to print the function and not call it.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**

  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**

  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**
