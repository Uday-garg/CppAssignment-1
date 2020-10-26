#include <iostream>
#include <fstream>
using namespace std;

class Payroll
{
	private:
		double hours;
		double rate;


	public:
		Payroll()
		{
			double hours;
			double rate;
		}
    void setPayDay(double pay, double time)
    {
        hours = time;
        rate = pay;
        }
		int getHour()
		{
			return hours;
		}
		double getRate()
		{
			return rate;
		}
		double pay()
		{
			return hours * rate;
		}
};




int main()
{


	Payroll workers[7];
	


	for (int x = 0; x < 7; x++)
	{
		double hour;
		double rate;

    cout << "what is the number of hours worked by employee number " << x+1 << "?\n";
    cin >> hour;
    if (hour <= 60){
        cout << "What is the wage of that emolpyee?\n";
        cin >> rate;   

        cout << "The gross pay of emplyee " << x+1 << " is $";
        Payroll payDay;
        payDay.setPayDay(hour, rate);
        cout << payDay.pay();
        cout << "\n" <<"===================================\n";
        } 
    }    

	return 0;
}
