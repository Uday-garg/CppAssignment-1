This segment is for a loan and it is written as 
```cpp
if (interestRate > .07)
  cout << "This account earns a $10 bonus.\n";
  balance += 10.0;
  ```
  Instead, as it is a loan it should substract $10 from the balance such as: -
  ```cpp
  if (interestRate > .07)
  cout << "This account earns a $10 bonus.\n";
  balance -= 10.0;
  ```
