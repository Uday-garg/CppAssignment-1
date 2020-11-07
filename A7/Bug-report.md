# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;
class Student
{
 int age;
 public:
 string studentName;
 string studentNumber;
 Student(){}
 Student(string name, string number, int age)
 {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
 }
 void setStudent(string name, string number, int age)
 {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
 }

```

2. **What bug does the original code have?**

  I put all the strings under public whereas it should have been in the protected head.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    I thought that putting it in public would make it easier for me to access it later when I needed it.

4. **How to correct the bug?**

    I just had to put it in the protected head.

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include <iostream>
using namespace std;
class Student
{
 protected:
 string studentName;
 string studentNumber;
 int age;
 public:
 Student(){}
 Student(string name, string number, int age)
 {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
 }
 void setStudent(string name, string number, int age)
 {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
 }
```

6. **What is the take-away message from this bug?**

--- Always make sure that my consepts are clear and I know where the protected files are to be used.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```cpp
KPUstd1Student ks("Arnav", "Z8765", 19, "IT", "Online", 1);
 //printing the function
 KPUstd1.PKpuStudent();
```

2. **What bug does the original code have?**

    I wrothe this piece of code later so, I did not was just adding a example case and hence when I wrote it I used the class variables before they were actually called in the int   main() function

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    This I think was just an honest mistake as I needed to call the variables after declaring them.

4. **How to correct the bug?**

    Just declare the variables before using them.

5. **The corresponding bug-free code or code snippet is:**

```cpp
KpuStudent ks("Arnav", "Z8765", 19, "IT", "Online", 1);
 //printing the function
 ks.PKpuStudent();
```

6. **What is the take-away message from this bug?**

--- The take away is to always double check my code.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```cpp
cout<<"Enter Your Name: ";
getline (cin, sname);
```

2. **What bug does the original code have?**

  In my int main() function I have the inputs for student but here I added it as getline unlike any other input.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought that it would make it easier to allocate a line for it and let me add more than one names on re-runs.

4. **How to correct the bug?**

Just do the normal cin << "";

5. **The corresponding bug-free code or code snippet is:**

```cpp
cout<<"Enter Your Name: ";
 cin>>stdName; 
```

6. **What is the take-away message from this bug?**
 Debugging is an important step.
