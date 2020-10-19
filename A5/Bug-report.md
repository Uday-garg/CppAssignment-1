# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;

int doSomething(int *x, int *y)
{

int temp=*x;
*x= *y * 5;
*y = temp * 3;
return *x+*y;
}

int main()
{
int *y,*x;
cout << "Please enter a number" << endl;
cin >> *x;
cout << "Please enter another number" << endl;
cin >> *y;


doSomething(&x, &y);
cout << (x + y) << " = x(" << x << ") + y(" << y << ")" << endl;
system("Pause");
return 0;
}

```

2. **What bug does the original code have?**

  I put '*' sign in the int main() function so that it points back to the place of the doSomething function.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    I thought pointing it to the place of the int doSomething function would make it a good choice.

4. **How to correct the bug?**

    Just remove the '*'.

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include <iostream>
using namespace std;

int doSomething(int *x, int *y)
{

int temp=*x;
*x= *y * 5;
*y = temp * 3;
return *x+*y;
}

int main()
{
int y,x;
cout << "Please enter a number" << endl;
cin >> x;
cout << "Please enter another number" << endl;
cin >> y;


doSomething(&x, &y);
cout << (x + y) << " = x(" << x << ") + y(" << y << ")" << endl;
system("Pause");
return 0;
}
```

6. **What is the take-away message from this bug?**

--- I  should re-study the concepts of pointers.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```cpp
#include <iostream>
using namespace std;

void showArray(const int[], int);
int *reverseArray(const int[], const int);

int main(){
    // declaring the size of the array
    const int size = 10;
    // entering the preset contents of the array
    int elements[size] = {1,2,3,4,5,6,7,8,9,10};
    cout << "--------------------------------------------------------------\n";
    cout << "The original array is\n";
    // printing out the contents of the array with element number
    showArray(elements, size);
    // initializing reversing the array
    int *reverse = reverseArray(elements, size);
    cout << "The reversed array is \n";
    // printing the reversed array
    showArray(size, reverse);
    return 0;
}

void showArray(const int arr[], int size){
    for (unsigned i = 0; i < size; i++){
        cout << "Element [" << i+1 << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
}

int *reverseArray(const int arr[], const int size){
    int *reverseArr = new int [size];
    for (unsigned i = 0; i < size; i++){
        *(reverseArr + i) = *( arr + size -1 -i);
    }
    return reverseArr;
}
```

2. **What bug does the original code have?**

  I put showArray(size, reverse); instead of showArray(reverse, size);

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    It was a misrepresentation of the function that I wrote.

4. **How to correct the bug?**

I hust had to change the showArray(size, reverse); into showArray(reverse, size);

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include <iostream>
using namespace std;

void showArray(const int[], int);
int *reverseArray(const int[], const int);

int main(){
    // declaring the size of the array
    const int size = 10;
    // entering the preset contents of the array
    int elements[size] = {1,2,3,4,5,6,7,8,9,10};
    cout << "--------------------------------------------------------------\n";
    cout << "The original array is\n";
    // printing out the contents of the array with element number
    showArray(elements, size);
    // initializing reversing the array
    int *reverse = reverseArray(elements, size);
    cout << "The reversed array is \n";
    // printing the reversed array
    showArray(reverse, size);
    return 0;
}

void showArray(const int arr[], int size){
    for (unsigned i = 0; i < size; i++){
        cout << "Element [" << i+1 << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
}

int *reverseArray(const int arr[], const int size){
    int *reverseArr = new int [size];
    for (unsigned i = 0; i < size; i++){
        *(reverseArr + i) = *( arr + size -1 -i);
    }
    return reverseArr;
}
```

6. **What is the take-away message from this bug?**

---I need to take more time in order to relate to the code I write.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```cpp
#include <iostream>
using namespace std;

void showArray(const int[], int);
int *reverseArray(const int[], const int);

int main(){
    // declaring the size of the array
    const int size = 10;
    // entering the preset contents of the array
    int elements[size] = {1,2,3,4,5,6,7,8,9,10};
    cout << "--------------------------------------------------------------\n";
    cout << "The original array is\n";
    // printing out the contents of the array with element number
    showArray(elements, size);
    // initializing reversing the array
    int *reverse = reverseArray(elements, size);
    cout << "The reversed array is \n";
    // printing the reversed array
    showArray(reverse, size);
    return 0;
}

void showArray(const int arr[], int size){
    for (unsigned i = 0; i < size; i++){
        cout << "Element [" << i+1 << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
}

int *reverseArray(const int arr[], const int size){
    int *reverseArr = new int [size];
    for (unsigned i = 0; i < size; i++){
        *(reverseArr + i) = *( arr + size -1 -i);
    }
    return reverseArr;
}
```

2. **What bug does the original code have?**

  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include <iostream>
using namespace std;

void showArray(const int[], int);
int *reverseArray(const int[], const int);

int main(){
    // declaring the size of the array
    const int size = 10;
    // entering the preset contents of the array
    int elements[size] = {1,2,3,4,5,6,7,8,9,10};
    cout << "--------------------------------------------------------------\n";
    cout << "The original array is\n";
    // printing out the contents of the array with element number
    showArray(elements, size);
    // initializing reversing the array
    int *reverse = reverseArray(elements, size);
    cout << "The reversed array is \n";
    // printing the reversed array
    showArray(reverse, size);
    return 0;
}

void showArray(const int arr[], int size){
    for (unsigned i = 0; i < size; i++){
        cout << "Element [" << i+1 << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
}

int *reverseArray(const int arr[], const int size){
    int *reverseArr = new int [size];
    for (unsigned i = 0; i < size; i++){
        *(reverseArr + i) = *( arr + size -1 -i);
    }
    return reverseArr;
}
```

6. **What is the take-away message from this bug?**
