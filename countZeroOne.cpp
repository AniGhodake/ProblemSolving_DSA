#include<iostream>
using namespace std;

int main(){
    int arr[15] = {0,1,1,1,0,1,0,0,1,0,1,1,1,1,1};
    int size =15;
    int zeroCount=0,oneCount=0;
    for(int iterator=0; iterator<size; iterator++){
        if(arr[iterator] ==0){
            zeroCount++;
        }
        if(arr[iterator] == 1){
            oneCount++;
        }
    }
    cout<<"Number of one's : "<<oneCount<<endl<<"Number of zero's : "<<zeroCount;
}