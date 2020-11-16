#include <iostream>
#include <string>
using namespace std;
class Student {
    private:
        string name;
        string enrollmentYear;
    
    public:
    
        // default constructor
        Student() {
            
        }
        
        // parameterized constructor
        Student(string name, string enrollmentYear) {
            this->name = name;
            this->enrollmentYear = enrollmentYear;
        }
        
        // getter for name
        string getName() {
            return name;
        }
    
        // getter for enrollment year
        string getEnrollmentYear() {
            return enrollmentYear;
        }
    
        // setter for name
        void setName(string name) {
            this->name = name;
        }
    
        // setter for enrollment year
        void setEnrollmentYear(string enrollmentYear) {
            this->enrollmentYear = enrollmentYear;
        }
    
        // print() function
        virtual void print() { 
            cout << "Name: " << name << endl;
            cout << "EnrollmentYear: " << enrollmentYear << endl; 
        }
};
class KpuStudent : public Student {
    private:
        string campusLocation;
    
    public:
    
        // parameterized constructor
        KpuStudent(string name, string enrollmentYear, string campusLocation) : Student(name, enrollmentYear) {
            this->campusLocation = campusLocation;
        }
        
        // getter for campus location
        string getCampusLocation() {
            return campusLocation;
        }
    
        // setter for campus location
        void setCampusLocation(string campusLocation) {
            this->campusLocation = campusLocation;
        }
    
        // overriding print() function
        virtual void print() { 
            cout << "Name: " << getName() << endl;
            cout << "Campus Location: " << campusLocation << endl; 
        }
};
class HogwartsStudent : public Student {
    private:
        string houseAffiliation;
    
    public:
    
        // parameterized constructor
        HogwartsStudent(string name, string enrollmentYear, string houseAffiliation) : Student(name, enrollmentYear) {
            this->houseAffiliation = houseAffiliation;
        }
        
        // getter for house affiliation
        string getHouseAffiliation() {
            return houseAffiliation;
        }
    
        // setter for house affiliation
        void setHouseAffiliation(string houseAffiliation) {
            this->houseAffiliation = houseAffiliation;
        }
    
        // overriding print() function
        virtual void print() { 
            cout << "Name: " << this->getName() << endl;
            cout << "House Affiliation: " << houseAffiliation << endl; 
        }
};
int main() {
    
    // create 3 student objects
    Student student = Student("Student 1", "2020");
    KpuStudent kpuStudent = KpuStudent("Student 1", "2020", "Surrey");
    HogwartsStudent hogwartsStudent = HogwartsStudent("Student 1", "2020", "Hufflepuff");
    
    // Student array (pointer)
    Student * students[3];
    
    // assign address of above created student objects
    students[0] = &student;
    students[1] = &kpuStudent;
    students[2] = &hogwartsStudent;
    
    // loop through the array and call print() function
    for(int i = 0; i < 3; i++) {
        students[i]->print();
    }
    
    return 0;
}
