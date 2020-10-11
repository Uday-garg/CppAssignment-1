#include <iostream>

using namespace std;

//function prototype
void displayLarger(int[], int, int);

int main()
 {
    //declare variables needed
    //initialize array
    int n, sizeof_n, arr_n;
    cout << "What is the size of your array? "<< endl;
    cin >> sizeof_n;
    int arrSize = sizeof_n;
    cout << "What are the contents of your array? (Please input numbers seperated by ',' and a space.)" << endl;
    cin >> arr_n;
    int numArray[arrSize] = {arr_n};

    //display array for reference
    cout << "Contents of array:\n";
    for(int counter = 0; counter < arrSize; counter++){
        cout << numArray[counter] << " ";
    }

    //call function with argument 3
    cout << "\n\nNow calling function with argument n...\n";
    cout << "What is the number you want as the lowest number reference to compare other numbers? ";
    cin >> n;
    displayLarger(numArray, arrSize, n);


    //return 0 to mark successful completion of program
    return 0;
 }

 void displayLarger(int nums[], int size, int largerThan){
    cout << "\nDisplaying all numbers in array that are ";
    cout << "larger than " << largerThan << ":\n";

    for(int counter = 0; counter < size; counter++){
        if(nums[counter] > largerThan)
            cout << nums[counter] << " ";
            else 
            cout << "There is no number bigger than the chosen number.";
            break;
    }
 }
