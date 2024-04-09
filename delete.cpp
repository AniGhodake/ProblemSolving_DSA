// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


//{ Driver Code Starts.
int main() {
    int k = 3;
    int arr[5] = {1,2,3,4,5};
    int n= 5;
    int j = 0;
    for(int i = 0; i< 5; i++){
        j =(i+k)%n;
        //cout<<"hello world"<< endl;
        cout<<arr[j]<< endl;
        j++;
    }
    
  


    return 0;
}
