#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
for(int row=0; row<n; row=row+1) {
		int totalCol = row+1;
		for(int col=0; col<totalCol; col=col+1) {
			
			if(col == totalCol -1){
				cout << row+1;                // ALTERNATE SOLUTIION FOR BELOW PROBLEM
			}
			else {
				cout << row+1 << "*";
			}
			
		}
		cout << endl;
	}
}