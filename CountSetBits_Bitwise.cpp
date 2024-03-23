#include<iostream>
using namespace std;
// int countBit(int num){
//     int count =0;
//     int bit= 0;
//     while(num){
//         bit = (num & 1);
//         if(bit){
//             count++;
//         }
//         num = num>>1;
        
//     }
//     return count;
// }
int main(){
    int num;
    cout<<"Enter the Number "<<endl;
    cin>>num;
    int BitsCount = countBit(num);
    cout<<"Count of set bits in number is : "<<BitsCount;
}
