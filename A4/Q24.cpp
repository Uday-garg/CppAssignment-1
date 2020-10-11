#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (n == 0 || n == 1){
    cout << "False\n";
    exit(0);
    }
    if (n==2) {
    cout << "True";
    exit(0);
    }
    for (int x = 2; x <= n / 2; ++x){
      if (n % x ==0){
      cout << "False";
      break;}
      else if (n%x; x!=0){
      cout << "True";
      break;}
    }
}
