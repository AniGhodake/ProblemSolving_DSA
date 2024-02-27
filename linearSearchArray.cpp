#include<iostream>
using namespace std;

void SearchNum(int arr[], int size, int num){
    int flag=0;
    for (int i = 0; i< size; i++){
        if(arr[i]==num){       
            flag == 1;
            cout<<"Found";
            return;
        }
        
       
    }
    if(flag == 0){
        cout<<"Element Not Found";
    }

}


int main (){
    int arr[5];
    int size = 5;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number that you want to search :";
    cin>>num;
    SearchNum(arr,size,num);
    
}