#include<iostream>
#include<limits.h>
using namespace std;

int minSearch(int arr[], int size){
    int min = INT_MAX;
    for(int iterator=0; iterator<size; iterator++){
        if(arr[iterator] < min){
            min = arr[iterator];
        }
    }
    return min;
}

int main(){
    int arr[15]= {111,55,15,85,45,68,85,54,56,56,84,045,88,77,45};
    int size = 15;

    int min = minSearch(arr,size);
    cout<<"Minimum number in an array is : "<<min<<endl;
}