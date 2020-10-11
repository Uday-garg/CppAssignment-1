#include <iostream>
using namespace std;
bool primeCheck(int n);
int main() {
  int n;
  cout << "What is the number you want to test for a prime number?\n";
  cout << "Please enter a positive intiger\n";
  cin >> n;
  if (primeCheck(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}
bool primeCheck(int n){
bool prime = true;
if (n == 0 || n == 1){
  prime = false;
  }
  if (n==2) {
  prime = true;
  }
  for (int x = 2; x <= n / 2; ++x){
    if (n % x ==0){
    prime = false;
    break;}
    else if (n%x; x!=0){
    prime = true;
    break;}
  }
  return prime;
}
