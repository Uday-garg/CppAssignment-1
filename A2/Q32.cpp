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
