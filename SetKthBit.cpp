#include<iostream>
using namespace std;
int SetBit(int num,int k){
    int result;
    int mask = 1<<k;
    result =num | mask;
    return result;

}
int main(){
    int num,k;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    cout<<"Enter the value of k which bit you want to set : "<<endl;
    cin>>k;
    int result = SetBit(num,k);
    cout<<"The Number after setting k th bit is : "<<result;
}