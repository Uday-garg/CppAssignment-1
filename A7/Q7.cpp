#include <iostream>
using namespace std;
class Student
{
 protected:
 string student_name;
 string student_number;
 int age;
 public:
 Student(){}
 Student(string name, string number, int age)
 {
 this -> student_name = name;
 this -> student_number = number;
 this -> age = age;
 }
 void setStudent(string name, string number, int age)
 {
 this -> student_name = name;
 this -> student_number = number;
 this -> age = age;
 }
 void printStudent()
 {
 cout<<"Student Name: "<<student_name<<endl;
 cout<<"Student Number: "<<student_number<<endl;
 cout<<"Student Age: "<<age<<endl;
 }
 string getStudentName()
 {
 return student_name;
 }
 string getStudentNumber()
 {
 return student_number;
 }
 int getStudentAge()
 {
 return age;
 }
};
class KpuStudent : public Student
{
 protected:
 string major;
 string campus;
 int year;
 public:
 KpuStudent():Student(){}
 KpuStudent(string name, string number, int age, string m, string c,
int year) : Student(name, number, age)
 {
 this -> major = m;
 this -> campus = c;
 this -> year = year;
 }
 void setKpuStudent(string name, string number, int age, string m,
string c, int year)
 {
 this -> major = m;
 this -> campus = c;
 this -> year = year;
 setStudent(name, number, age);
 }
 void printKpuStudent()
 {
 cout<<"================== Details for KpuStudent =================="<<endl;
 printStudent();
 cout<<"Major: "<<major<<endl;
 cout<<"campus: "<<campus<<endl;
 cout<<"Year: "<<year<<endl;
 cout<<"============================ END ==========================="<<endl;
 }
 string getMajor()
 {
 return major;
 }
 string getCampus()
 {
 return campus;
 }
 int getYear()
 {
 return year;
 }

};
int main()
{
for (int i = 0; i < 2; i++){
 KpuStudent ks2;
 string sname, snumber, ksmajor, kscampus;
 int sage, ksyear;

 cout<<"Enter Your Name: ";
 cin>>sname; 
 cout<<"Enter Your Student Number: ";
 cin>>snumber;
 cout<<"Enter Your Age: ";
 cin>>sage;
 cout<<"Enter Your Major: ";
 cin>>ksmajor;
 cout<<"Enter Your Campus: ";
 cin>>kscampus;
 cout<<"Enter Your Year: ";
 cin>>ksyear;

 //input from function
 ks2.setKpuStudent(sname, snumber, sage, ksmajor, kscampus, ksyear);
 ks2.printKpuStudent();
}
}
