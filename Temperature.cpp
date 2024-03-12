#include<iostream>
using namespace std;
float Fahrenheit(int celsius){
    float fahren = celsius*(9/5)+32;
    return fahren;
}
float Kelvin(int celsius){
    float kel = celsius + 273.15;
    return kel;
}
int main(){
    int celsius;
    cout<<"Enter the Temperature in Degree Celsius"<<endl;
    cin>>celsius;
    float fahrenheit = Fahrenheit(celsius);
    float kelvin = Kelvin(celsius);
    cout<<celsius<<" Degree Celsius is "<<fahrenheit<<" Fahrenheit"<<endl;
    cout<<celsius<<" Degree Celsius is "<<kelvin<<" Kelvin"<<endl;
}