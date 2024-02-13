#include<iostream> 
using namespace std;

void findMissingNum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++ ){
        sum = sum + arr[i];
    }
     cout << "sum is : "<<sum << endl;

    float totalsum = ((float)arr[size-1]/2)*(arr[0] + arr[size-1]);
    cout << "total sum is : "<<totalsum << endl;

    int missingN = totalsum - sum;
    cout << "Missing term is : "<<missingN;
}

int main(){
    int arr[6];
    int size = 6;
    cout<< "Enter the array elements : "<<endl;
    for(int i = 0; i < size; i++ ){
        cin>>arr[i];
    }
    findMissingNum(arr, size);
}