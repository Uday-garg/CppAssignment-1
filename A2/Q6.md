The project below shows the decimal ascii value of a character

```cpp
#include <iostream>
using namespace std;

int main()
{
char letter;
cout << "Enter a character you need the ASCII code for: - " << endl;
cin >> letter;
cout << "The ascii value for the character " << letter << " is " << int(letter) << "." << endl;
return 0;
}
