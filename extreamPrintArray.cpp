#include<iostream>
using namespace std;

void extreamPrint(int arr[],int size){
    int first=0, last=size-1;
   // cout<<"hi";
    for(int i=0; first<=last; i++){
        if(first==last){
            cout<<arr[first]<<endl;
        }
        else{
            cout<<arr[first]<<endl<<arr[last]<<endl;
        }
        
        first++;
        last--;
    }
}

int main(){
    int arr[7] = {10,20,30,40,50,60,70};
    int size = 7;

    extreamPrint(arr,size);
}