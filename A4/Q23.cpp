#include<iostream>

using namespace std;

// This function basically takes 3 int inputs as (int[], int, int)
void function(int arr_num[ ], int arr_size, int n)
{
    for (int i = 0; i<arr_size; i++)
    {
        if (arr_num[i] > n)
        {
           cout << arr_num[i] << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr_num[] = {1256,20,374,4,59,690,707,8080808,9999};
    int arr_size = 9;
    int n;
    
    cout << "The arrays are given below: \n"<<endl;
    
    for (int i = 0; i<arr_size; i++){
        cout << arr_num[i]<<" ";
        }
        
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout << "The following program will give out all the numbers that are bigger than your chosen number." << endl;
    function(arr_num,arr_size,n);  
    return 0;
}

