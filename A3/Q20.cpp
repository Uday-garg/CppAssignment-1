// For every word in the sentence, the first letter is relocated the end of the word
// All letters in the output are uppercase.
// The string "KPU" is added to every word



#include <iostream>
#include <string>
using namespace std;

void convert (string& y)
{
    for (int a = 0; a < y.length(); a++)
        y[a] = toupper(y[a]);
    }
int main()
{
  int x, i;
  string y, sentence = "", z = "KPU";
   cout << "Type the number of words your sentence is gonna have. \n\n";
   cin >> x;
   if (x <= 0)
   {
       cout << "please follow the instructions mentioned above \n\n";
       }

   else
   {
       for (i = 1; i <= x; i++)
       {
           cout << "enter the word number " << i << "\n";
           cin >> y;
           convert(y);
           sentence = sentence + " " + y.erase(0,1) + y[0] + z;
           }
           cout << "accoding to the question, the desired sentence is: \n " << sentence;
       }
   
   
   
   return 0;
   }
