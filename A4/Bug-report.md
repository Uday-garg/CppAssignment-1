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

```
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
