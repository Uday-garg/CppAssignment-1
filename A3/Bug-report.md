# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day = 0, total_days;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
  cin >> numStudents;
  cout <<endl;
  cout << "Enter the number of days in the long weekend" << endl << endl;
  cin >> total_days;
  cout <<endl;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << "." << endl;
			cin >> numHours;

			total = total ++ numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
	}

	return 0;
}

```

2. **What bug does the original code have?**

  Line 34 has 2 '+' symbols instead of one.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought if I had to assign a new value to total, I would need to add a '+' sign.

4. **How to correct the bug?**

I removed the '++' and replaced  it with a +

5. **The corresponding bug-free code or code snippet is:**

``` cpp
#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day = 0, total_days;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
  cin >> numStudents;
  cout <<endl;
  cout << "Enter the number of days in the long weekend" << endl << endl;
  cin >> total_days;
  cout <<endl;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
	}

	return 0;
}

```

6. **What is the take-away message from this bug?**

I learnt that I do not need 2 operation signs to assign a value.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average, average_calc1, average_calc2;
	int student, day = 0, total_days;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming and studying biology over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
  cin >> numStudents;
  cout <<endl;
  cout << "Enter the number of days in the long weekend" << endl << endl;
  cin >> total_days;
  cout <<endl;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on programming on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
       average_calc1 = average;

//**************************************************************
      total = 0;
       for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on biology on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent studying biology by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
       average_calc2 = average;
    
    cout << "The average of number of hours spent by by student "
				 << student << " on ";
         if (average_calc1 > average_calc2)
          cout << "programming";
            else
            cout << "biology";
            else if (average_calc1 = average_calc2)
              cout << "Both the subects are equally studied by the student."
              break;
          cout << " is greater by " << abs(average_calc1 - average_calc2) << " hour(s).";
	}

	return 0;
}
```

2. **What bug does the original code have?**

  I have entered the if (average_calc1 > average_calc2) situstion within the (average_calc1 > average_calc2) situation

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I thought it will exit if i make the '=' case.

4. **How to correct the bug?**

I put the '=' case above the '>' case
 
5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average, average_calc1, average_calc2;
	int student, day = 0, total_days;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming and studying biology over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
  cin >> numStudents;
  cout <<endl;
  cout << "Enter the number of days in the long weekend" << endl << endl;
  cin >> total_days;
  cout <<endl;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on programming on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
       average_calc1 = average;

//**************************************************************
      total = 0;
       for (day = 1; day <= total_days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on biology on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / total_days;

		cout << endl;
		cout << "The average number of hours per day spent studying biology by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
       average_calc2 = average;
    if (average_calc1 == average_calc2){
              cout << "Both the subects are equally studied by the student.";
              break;}
      else
      cout << "The average of number of hours spent by by student "
				 << student << " on ";
         if (average_calc1 > average_calc2)
          cout << "programming";
            else
            cout << "biology";
            
          cout << " is greater by " << abs(average_calc1 - average_calc2) << " hour(s).";
	}

	return 0;
}
```

6. **What is the take-away message from this bug?**

--- It is always safe to assume that my code needs debugging.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
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
      for (i = 1; i <= output; i++
        cout << "Please enter the original sentence word by word without spaces: " << i << "\n";
        cin >> c;
        convert(c);
        sentence = sentence + " " + c.erase(0,1) + c[0] + k;
       cout << "Accoding to what you have entered, the suntence will be: \n " << sentence;
   return 0;
   }
```

2. **What bug does the original code have?**

  There should be curly brackets in the else statement just so that it can continue usingg the other code as a part of the program and not the else statement

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

Spacing in indenting i thought would not make it a problem whereas i should have been a bit more attentive

4. **How to correct the bug?**

By putting the curly brackets.

5. **The corresponding bug-free code or code snippet is:**

```
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

```

6. **What is the take-away message from this bug?**

The take away here for me is that I need to learn how and where to use the brackets.
