#include<iostream>
using namespace std;

int main(){
  
    // int my_array1[5] = {1, 2, 3, 4, 5}; // Initialize all elements of the array.
   
    // int my_array2[5] = {1, 2, 3}; // Initialize the first three elements of the array. The remaining elements will be initialized to zero.
    
   
    // for(int i=0;i<5;i++){
    //     cout<<my_array2[i]<<"\n";
    // }    
    

    int num;
    cout<<"enter the number";
    cin>>num;
    int arr[num];
     
    for(int a = 0; a<num; a++){
        cin>>arr[a];
    }
    //Printing the array in for loop
    cout << "Printing the array : ";
    for(int a=0; a<num; a++){
        cout<<arr[a]<<endl;
    }
}