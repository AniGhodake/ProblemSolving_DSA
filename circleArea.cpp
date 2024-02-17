#include <iostream>
using namespace std;
#define pi 3.1495

float AreaOfCircle(int radius){
    float area = pi * radius * radius;
    return area;
}

int main() {
    int radius;
    cout<<"Enter the value of Radius : "<<endl;
    cin>>radius;
    float area = AreaOfCircle(radius);
    cout<<"Area of Circle with radius "<<radius<<" is "<<area;
}