# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
Student std = Student("Arnav", 2020);
    KpuStudent Kstd = KpuStudent("Arnav", 2020, "Surrey");
    HogwartsStudent Hstd = HogwartsStudent("Arnav", 2020, "Gryffindor");

```

2. **What bug does the original code have?**

  I don't have "" on the numbers even though they are strings.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    It wasn't a mis-understanding but a confusion that I put it in as a int.

4. **How to correct the bug?**

    Add the "" before and after 2020s.  

5. **The corresponding bug-free code or code snippet is:**

```cpp
Student std = Student("Arnav", "2020");
    KpuStudent Kstd = KpuStudent("Arnav", "2020", "Surrey");
    HogwartsStudent Hstd = HogwartsStudent("Arnav", "2020", "Gryffindor");
```

6. **What is the take-away message from this bug?**

--- Always make sure that I am coding in the right parameters.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```cpp
// Student array (pointer)
    Student * students[3];
    
    // assign address of above created student objects
    students{0} = &std;
    students{1} = &Kstd;
    students{2} = &Hstd;

```

2. **What bug does the original code have?**

  While I was writing the code, I rushed up and forgot to use the square parentheses instead of the curly ones. 

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    It was just because I was rushing and not paying much attention because I knew I would de-bug.

4. **How to correct the bug?**

    Change the curly parentheses with the square ones.

5. **The corresponding bug-free code or code snippet is:**

```cpp
// Student array (pointer)
    Student * students[3];
    
    // assign address of above created student objects
    students[0] = &std;
    students[1] = &Kstd;
    students[2] = &Hstd;
```

6. **What is the take-away message from this bug?**

       Always keep a note of where I am coding.
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```cpp
// overriding print() function
        virtual void print() { 
            cout << "Name: \n" << getName();
            cout << "Campus Location: \n" << campusLocation; 
        }

```

2. **What bug does the original code have?**

    I have added the "\n" or end line function before the output and it makes the output look bad.  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

    I mistook that the \n function will end the line after the output.

4. **How to correct the bug?**

    Remove \n and add endl; at the end.

5. **The corresponding bug-free code or code snippet is:**

```cpp
// overriding print() function
        virtual void print() { 
            cout << "Name: " << getName() << endl;
            cout << "Campus Location: " << campusLocation << endl; 
        }
```

6. **What is the take-away message from this bug?**
    
       Debugging always pays off even when the code works.
