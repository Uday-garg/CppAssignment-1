# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
 StockPrices s(*ptr, *max);
    cout << s.avg();
```

2. **What bug does the original code have?**
    
    I used pointers for ptr and max     
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
   
    I thought that pointers would be a good idea as they point to the memory location
4. **How to correct the bug?**
    
    Just remove the pointers
5. **The corresponding bug-free code or code snippet is:**

```cpp
 StockPrices s(ptr, max);
    cout << s.avg();
```

6. **What is the take-away message from this bug?**
   
   I should always debug my code
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

```cpp
int main() {
    int max;
    cout << "Enter size of array: " << endl;
    cin >> max;
    
    int *ptr = new(nothrow) int[max];
    
    for(int i=1; i<max; i++) {
        cout << "Enter value: "; 
        cin >> ptr[i];
    }
    cout << "Input array: " << endl;
    for(int i=1; i<max; i++) cout << ptr[i] << " ";
    cout << endl;
    
    StockPrices s(ptr, max);
    cout << s.avg();
    
    return 0;
}

```

2. **What bug does the original code have?**

  i = 1 is the bug because I initialized the variable at 1 and it was skipping the last one. 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
 
  I did it by mistake as I wanted to show that i would start from the first area.

4. **How to correct the bug?**

  Just had to make i = 0 instead of i = 1

5. **The corresponding bug-free code or code snippet is:**

```cpp
int main() {
    int max;
    cout << "Enter size of array: " << endl;
    cin >> max;
    
    int *ptr = new(nothrow) int[max];
    
    for(int i=0; i<max; i++) {
        cout << "Enter value: "; 
        cin >> ptr[i];
    }
    cout << "Input array: " << endl;
    for(int i=0; i<max; i++) cout << ptr[i] << " ";
    cout << endl;
    
    StockPrices s(ptr, max);
    cout << s.avg();
    
    return 0;
}

```

6. **What is the take-away message from this bug?**

 I just have to keep my focus on the code.
