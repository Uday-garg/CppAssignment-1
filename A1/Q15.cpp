*/ What's wrong with this program? /*
#include iostream
using namespace std;
int main();
}
int a, b, c \\ Three integers
a = 3
b = 4
c = a + b
Cout < "The value of c is %d" < C;


  In line 1 instead of "*/" and "/*" there should be "//" in the start
  In the second line iostream should be like <iostream>
  In line 5 instead of closing bracket there should be an opening bracket like "{"
  Instead of lines 6, 7 and 8 two approaches can be taken:-
    int a =3;
    int b =4;
   #Or
    int a =3, b = 4;
   In line 9 it should be like "int c = a + b;"
   In line 10 cout should have a small "c", "<" should be replaced by "<<", there should not be "%d" in the line and in the end "C" should be replacced by "c"
   There should be a "}" in line 11 
