#include<iostream>
using namespace std;
// void DigitSeparation(int num){
//     int digit;
//     cout<<"Digits Of the Integer "<<num<<" is as follows :"<<endl;
//     while(num){
//         digit = num%10;
//         cout<<digit<<" "<<endl;
//         num = num/10;
//     }
// }
int main(){
    int num;
    cout<<"Enter the Number to find its Digits : "<<endl;
    cin>>num;
    DigitSeparation(num);
}
