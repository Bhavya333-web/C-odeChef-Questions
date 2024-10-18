#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,X,Y;
	cin>>A>>B>>X>>Y;
	if((A*2 +B) > (X*2+Y)){
	    cout<<"Messi";
	}
	else if((A*2 +B) < (X*2+Y)){
	    cout<<"Ronaldo";
	}
	else{
	    cout<<"Equal";
	}

}
