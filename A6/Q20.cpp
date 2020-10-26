#include <iostream>
using namespace std;

class Cylinder
{
private:
    double rad; //radius
    double hit; //height
public:
    
    void setDimensions(double r, double h)
    {
        rad = r;
        hit = h;
        }
    double getRadius() 
    {
        return rad;
        }
    double getHeight() 
    {
        return hit;
        }
    double getVolume() 
    {
        return 3.14159 * rad * rad * hit;
        }    
    
    };
    
int main()
{
    double x, y;
    cout << "Enter the radius of your cylinder \n";
    cin >> x;
    cout << "Enter the height of your cylinder \n";
    cin >> y;
    Cylinder volume;
    volume.setDimensions(x, y);
    cout << volume.getVolume();
    }    
    
