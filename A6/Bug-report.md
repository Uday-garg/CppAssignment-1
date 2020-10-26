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

```cpp
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

```cpp
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
        r = rad;
        h = hit;
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

2. **What bug does the original code have?**

  I have assigned the values of rad and hit to r and h respectively.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    I thought that rad and hit would be changed as they were containing gibberish.

4. **How to correct the bug?**
    
    I had to reverse the assignment.
    
5. **The corresponding bug-free code or code snippet is:**

```cpp
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
        
       The take away is to make sure I am assigning values in the right order.
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

class Payroll
{
	private:
		double hours(0);
		double rate(0);


	public:
		Payroll()
		{
			double hours;
			double rate;
		}
    void setPayDay(double pay, double time)
    {
        hours = time;
        rate = pay;
        }
		int getHour()
		{
			return hours;
		}
		double getRate()
		{
			return rate;
		}
		double pay()
		{
			return hours * rate;
		}
};




int main()
{


	Payroll workers[7];
	

     cout << "Please make sure that the total number of hours doesn't exceed 60\n";
	for (int x = 0; x < 7; x++)
	{
		double hour;
		double rate;

 
    cout << "what is the number of hours worked by employee number " << x+1 << "?\n";
    cin >> hour;
    if (hour <= 60){
        cout << "What is the wage of that emolpyee?\n";
        cin >> rate;   

        cout << "The gross pay of emplyee " << x+1 << " is $";
        Payroll payDay;
        payDay.setPayDay(hour, rate);
        cout << payDay.pay();
        cout << ".\n" <<"===================================\n";
        } 
      else {
        cout << "Please enter the total hours less than 60\n The program is skipping this employee. Please contact a manager to edit this.\n";
      }
    }    

	return 0;
}
```

2. **What bug does the original code have?**

  The code didn't work when and gave errors.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    I was assigning 0 to hours and rate in the private tab.

4. **How to correct the bug?**

    Remove the assignment of 0 from the private area

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
#include <fstream>
using namespace std;

class Payroll
{
	private:
		double hours;
		double rate;


	public:
		Payroll()
		{
			double hours;
			double rate;
		}
    void setPayDay(double pay, double time)
    {
        hours = time;
        rate = pay;
        }
		int getHour()
		{
			return hours;
		}
		double getRate()
		{
			return rate;
		}
		double pay()
		{
			return hours * rate;
		}
};




int main()
{


	Payroll workers[7];
	

     cout << "Please make sure that the total number of hours doesn't exceed 60\n";
	for (int x = 0; x < 7; x++)
	{
		double hour;
		double rate;

 
    cout << "what is the number of hours worked by employee number " << x+1 << "?\n";
    cin >> hour;
    if (hour <= 60){
        cout << "What is the wage of that emolpyee?\n";
        cin >> rate;   

        cout << "The gross pay of emplyee " << x+1 << " is $";
        Payroll payDay;
        payDay.setPayDay(hour, rate);
        cout << payDay.pay();
        cout << ".\n" <<"===================================\n";
        } 
      else {
        cout << "Please enter the total hours less than 60\n The program is skipping this employee. Please contact a manager to edit this.\n";
      }
    }    

	return 0;
}
```

6. **What is the take-away message from this bug?**
      
      The take away is that Private is just for declaring and not for assigning.
