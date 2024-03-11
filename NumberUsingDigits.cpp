#include<iostream>
using namespace std;
int NumberCreation(int NoOfDigits){
    int num= 0;
    int digit;
    for(int count=0;count<NoOfDigits;count++){
        cout<<"Enter The Digit"<<endl;
        cin>>digit;
        num = num *10 +digit;
        cout<<"Number Created so far is : "<<num<<endl;
    }
    return num;

}
int main(){
    int NoOfDigits;
    cout<<"Enter the number of digits that you want to enter: "<<endl;
    cin>>NoOfDigits;
    int result = NumberCreation(NoOfDigits);
    cout<<"Final Number Created is: "<<result<<endl;
}