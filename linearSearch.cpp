#include<iostream>
using namespace std;

bool searchTarget(int arr[],int size,int target){
    int flag=0;
     for(int counter =0; counter<size; counter++){
        if(arr[counter]==target){         
            flag =1;
        }
    }
    return flag;
}


// void searchTarget(int arr[],int size,int target){
//     int flag=0;
//     for(int counter =0; counter<size; counter++){
//         if(arr[counter]==target){
//             cout<<"target found at index : "<<counter;
//             flag = 1;
//         }
//     }
//     if(flag==0)
//     cout<<"target not found";
// }

int main(){
    int target = 13;
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    bool result = searchTarget(arr,size,target);
    if(result){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}