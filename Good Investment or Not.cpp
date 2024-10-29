#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i =0;i<T;i++){
	    int X,Y;
	    cin >>X>>Y;
	    if(Y*2>X){
	        cout<<"NO"<<endl;
	    }
	    else if(Y*2<=X){
	        cout<<"YES"<<endl;
	    }
	}

}
