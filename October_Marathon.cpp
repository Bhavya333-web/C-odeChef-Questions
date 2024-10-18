#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	
	if(t<3){
	    cout << "gold";
	}
	else if(t>=3 && t<6){
	    cout << "silver";
	}
	
	else if(t>=6){
	    cout << "BRONZE";
	}
	return 0;
}