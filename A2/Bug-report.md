# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
 default (5):
      cout << "Not good with numbers, eh?\n";
      break;

```

2. **What bug does the original code have?**

I wrote the default code as a case where as it should be empty as it is a default case for all the possible outputs.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I think that the misunderstanding that made this happen was that while using default i was just thinking of it as a normal case.

4. **How to correct the bug?**

Just remove 5 and the brackets.

5. **The corresponding bug-free code or code snippet is:**

```
 default:
      cout << "Not good with numbers, eh?\n";
      break;

```

6. **What is the take-away message from this bug?**

--- the take away is that i need to pay attention to small details.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Volume of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  switch (selection) {
    case 1:
      cout << "Pi times radius squared\n";
      break;
    case 2:
      cout << "Length times width\n";
      break;
    case 3:
      cout << "Pi times radius squared times height\n";
      break;
    case 4:
      cout << "Well okay then, good bye!\n";
      break;
    default:
      cout << "Not good with numbers, eh?\n";
      break;
  }
  cout << "Not good with numbers, eh?\n";
  return 0;
}

```

2. **What bug does the original code have?**

  I wrote the line "cout << "Not good with numbers, eh?\n";" even after the default case so my program was always outputting the error message that i wrote.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I didn't know if the default was working or not and then i got confused.

4. **How to correct the bug?**

I had to remove the line form after the switch {}.

5. **The corresponding bug-free code or code snippet is:**

```

#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Volume of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  switch (selection) {
    case 1:
      cout << "Pi times radius squared\n";
      break;
    case 2:
      cout << "Length times width\n";
      break;
    case 3:
      cout << "Pi times radius squared times height\n";
      break;
    case 4:
      cout << "Well okay then, good bye!\n";
      break;
    default:
      cout << "Not good with numbers, eh?\n";
      break;
  }
  return 0;
}


```

6. **What is the take-away message from this bug?**

--- I need to understand and visualize my code before jumping to conclusions.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
int main()
{
int selection;
double cad, usd;
cad = 1.32 * usd;
cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion: ";
usd = cad / 1.32;
cin >> selection;
switch (selection) {
    case 1:
      cout << "Please enter the amount of CAD dollars: ";
      cin >> cad;
      cout << "They can be converted to " << usd << " USD.";
      break;
    case 0:
      cout << "Please enter the amount of USD dollars: ";
      cin >> usd;  
      cout << "They can be converted to" << cad << " CAD.";
      break;
    default:
      cout << "The choices were only '0' and '1'.";
      break;
}
}

```

2. **What bug does the original code have?**

  I wrote the conversion statement in global code area.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought that it will calculate from above and give out an answer

4. **How to correct the bug?**

Just remove one of the statements or keep them inside the switch area.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
int main()
{
int selection;
double cad, usd;
cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion: ";
cin >> selection;
switch (selection) {
    case 1:
      cout << "Please enter the amount of CAD dollars: ";
      cin >> cad;
      usd = cad / 1.32;
      cout << "They can be converted to " << usd << " USD.";
      break;
    case 0:
      cout << "Please enter the amount of USD dollars: ";
      cin >> usd;
      cad = 1.32 * usd;
      cout << "They can be converted to" << cad << " CAD.";
      break;
    default:
      cout << "The choices were only '0' and '1'.";
      break;
}
}

```

6. **What is the take-away message from this bug?**

I should learn how the code picks up and start visualizing it step by step.
