#include<iostream>
using namespace std;
int reverse(int num){
    int remainder;
    int rev = 0;
    while(num>0){
        remainder = num%10;
        rev = rev *10+remainder;
        num = num/10;
    }
    return rev;

}
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    int rev = reverse(num);
    cout<<"Reverse Number of "<<num<<" is "<<rev<<endl;
}