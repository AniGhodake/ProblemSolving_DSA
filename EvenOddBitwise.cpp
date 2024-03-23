#include<iostream>
using namespace std;
// bool isEven(int num){
//     if((num&1) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    bool result = isEven(num);
    if(result){
        cout<<"Entered number "<<num<<" is Even Number";
    }
    else{
        cout<<"Entered number "<<num<<" is Odd Number";
    }
}
