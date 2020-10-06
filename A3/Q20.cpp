#include <iostream>
#include <string>
using namespace std;

void convert (string& c)
{
    for (int word = 0; word < c.length(); word++)
        c[word] = toupper(c[word]);
    }
int main()
{
  int output, i; //i is used as an incriment
  string c, sentence = "", k = "KPU";
   cout << "Type the number of words your sentence is gonna have. \n\n";
   cin >> output;
   if (output < 0)
    cout << "Please follow the instructions mentioned above \n\n";
    else
      for (i = 1; i <= output; i++)
      {
        cout << "Please enter the original sentence word by word without spaces: " << i << "\n";
        cin >> c;
        convert(c);
        sentence = sentence + " " + c.erase(0,1) + c[0] + k;
      }
        cout << "Accoding to what you have entered, the suntence will be: \n " << sentence;
   return 0;
   }
