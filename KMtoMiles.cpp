#include<iostream>
using namespace std;
float KMtoMiles(float km){
    float miles = km*0.62137;
    return miles;
}
int main(){
    float km=0;
    cout<<"Enter the Kilometers"<<endl;
    cin>>km;
    float Miles = KMtoMiles(km);
    cout<<km<<" Kilometers is equal to "<<Miles<<" miles";
}