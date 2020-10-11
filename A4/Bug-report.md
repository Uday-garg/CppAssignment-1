# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include<iostream>

using namespace std;

// This function basically takes 3 int inputs as (int, int, int)
void function(int arr_num, int arr_size, int n) //{----------
{
    for (int i = 0; i<arr_size; i++)
    {
        if (arr_num[i] > n)
        {
           cout << arr_num[i] << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr_num[] = {1256,20,374,4,59,690,707,8080808,9999};
    int arr_size = 9;
    int n;
    
    cout << "The arrays are given below: \n"<<endl;
    
    for (int i = 0; i<arr_size; i++){
        cout << arr_num[i]<<" ";
        }
        
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout << "The following program will give out all the numbers that are bigger than your chosen number." << endl;
    function(arr_num,arr_size,n);  
    return 0;
}
```

2. **What bug does the original code have?**
  
  In the pontied out line I put all the int(s) as int because I thought that I could make the fitst input as an intiger but then make it as an arraay later in the function. 
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

The misunderstanding here is more of a error as I thought that it could be reinitialized as in Python.

4. **How to correct the bug?**

I had to add the '[ ]' infront of the first int in the void function. 

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include<iostream>

using namespace std;

// This function basically takes 3 int inputs as (int[], int, int)
void function(int arr_num[ ], int arr_size, int n) //{----------
{
    for (int i = 0; i<arr_size; i++)
    {
        if (arr_num[i] > n)
        {
           cout << arr_num[i] << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr_num[] = {1256,20,374,4,59,690,707,8080808,9999};
    int arr_size = 9;
    int n;
    
    cout << "The arrays are given below: \n"<<endl;
    
    for (int i = 0; i<arr_size; i++){
        cout << arr_num[i]<<" ";
        }
        
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout << "The following program will give out all the numbers that are bigger than your chosen number." << endl;
    function(arr_num,arr_size,n);  
    return 0;
}
```

6. **What is the take-away message from this bug?**

    The take away from this situation is that I need to pay more attention while I make statements so that I do not mix up programming languages. 
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```cpp
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (primeCheck(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}
bool primeCheck(int n){
bool prime = true;
if (n == 0 || n == 1){
  prime = false;
  }
  if (n==2) {
  prime = true;
  }
  for (int x = 2; x <= n / 2; ++x){
    if (n % x ==0){
    prime = false;
    break;}
    else if (n%x; x!=0){
    prime = true;
    break;}
  }
  return prime;
}

```

2. **What bug does the original code have?**

  I did not initialize the "primeCheck(int n)" in the world area of the code i.e. before the int main() function. 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was not able to understand why there was this problem as I was constantly checking my function and wasnt able to figure it out and then I realized that the function has to be called before I initialize it.

4. **How to correct the bug?**

I had to add call the function so that it can be called in the main function.

5. **The corresponding bug-free code or code snippet is:**

```cpp
#include <iostream>
using namespace std;
bool primeCheck(int n);
int main() {
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (primeCheck(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}
bool primeCheck(int n){
bool prime = true;
if (n == 0 || n == 1){
  prime = false;
  }
  if (n==2) {
  prime = true;
  }
  for (int x = 2; x <= n / 2; ++x){
    if (n % x ==0){
    prime = false;
    break;}
    else if (n%x; x!=0){
    prime = true;
    break;}
  }
  return prime;
}
```

6. **What is the take-away message from this bug?**

---I need to call all the functions before I initialize the function.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
bool primeCheck(int n);
int main() {
  for (int r; r > 2; r++ ) {
  cout << "This the test run number: -  "<< r << "\n";
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (primeCheck(n))
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";
  }
  return 0;
}
bool primeCheck(int n){
bool prime = true;
if (n == 0 || n == 1){
  prime = false;
  }
  if (n==2) {
  prime = true;
  }
  for (int x = 2; x <= n / 2; ++x){
    if (n % x ==0){
    prime = false;
    break;}
    else if (n%x; x!=0){
    prime = true;
    break;}
  }
}

```

2. **What bug does the original code have?**

  I used a for loop instead of a while loop and it give out errors as it is not a good initializer for the whole function.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought that the for loop can initailize and reinitialize the function.

4. **How to correct the bug?**

Use a while loop instead.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
bool primeCheck(int n);
int main() {
  int r(0);
  while (r < 2) {
      r++;
  cout << "This the test run number: -  "<< r << "\n";
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (primeCheck(n))
        cout << n << " is a prime number.\n\n\n";
    else
        cout << n << " is not a prime number.\n\n\n";
  }
  return 0;
}
bool primeCheck(int n){
bool prime = true;
if (n == 0 || n == 1){
  prime = false;
  }
  if (n==2) {
  prime = true;
  }
  for (int x = 2; x <= n / 2; ++x){
    if (n % x ==0){
    prime = false;
    break;}
    else if (n%x; x!=0){
    prime = true;
    break;}
  }
  return prime;
}
```

6. **What is the take-away message from this bug?**

I need to learn more about the loops and how they work.
