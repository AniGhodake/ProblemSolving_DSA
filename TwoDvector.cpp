#include<iostream>
using namespace std;
#include<vector>

int main(){
    // vector<int>arr;
    // arr.push_back(3);
    // arr.push_back(9);
    // arr.push_back(5);
    // arr.push_back(8);
    // arr.push_back(0);
    
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    // cout<<arr.empty()<<endl;

    // cout<<"Vector elements are as follows : "<<endl;

    // for(int i = 0; i < arr.size(); i++){
    //     cout<< arr[i]<<" "<<endl;
    // }

    vector<vector<int>>arr;
    vector<int>vec1(5,2);
    vector<int>vec2(7,5);
    vector<int>vec3(3,6);
    vector<int>vec4(10,9);

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }

}
