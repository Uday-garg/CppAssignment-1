#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
    string s;

    cout << "Enter string to be reversed: ";
    getline(std::cin, s);
    reverse(s.begin(), s.end());
    cout << "Resulting string is: \"" << s << "\".";
    cout << std::endl;
}
