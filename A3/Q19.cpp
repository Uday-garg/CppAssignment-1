//Arnav Bhalla
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
