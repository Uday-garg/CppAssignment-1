#include<iostream>
#include<memory>
using namespace std;

class StockPrices {
    private:
        int *a;
        int size;
    public:
        StockPrices(int arr[], int n){
            size = n;
            a = new(doNotThrow) int[size];
            for(int i=0; i<size; i++){
                a[i] = arr[i];
            }
        }
        double avg(){
            bool flag = true;
            double total = 0;
            for(int i=0; i<size; i++){
                try {
                    if(a[i]<0 || a[i]>5000){
                        flag = false;
                        throw a[i];
                    } 
                    else total += a[i];    
                }
                catch (int x){
                     cout << "Invaid number in array.\n";   
                }
            }
            return total/size;
        }
};


int main() {
    int max;
    cout << "Enter size of array: " << endl;
    cin >> max;
    
    int *ptr = new(doNotThrow) int[max];
    
    for(int i=0; i<max; i++) {
        cout << "Enter value: "; 
        cin >> ptr[i];
    }
    cout << "Input array: " << endl;
    for(int i=0; i<max; i++) cout << ptr[i] << " ";
    cout << endl;
    
    StockPrices s(ptr, max);
    cout << s.avg();
    
    return 0;
}
