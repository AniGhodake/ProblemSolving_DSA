/* Debug the code. Take input a character, print 1, if its a capital alphabet, 
print 0, if its a lowercase alphabet, else print -1.*/
#include<iostream>
using namespace std;
int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){ // insted of && there was ||
        cout<<"0";
    }
	else if('A'<=c && c<= 'Z'){   // insted of && there was ||
        cout<<"1";
    }
    else{
        cout<<"-1";                                                       // Debug Successfully
    }
}