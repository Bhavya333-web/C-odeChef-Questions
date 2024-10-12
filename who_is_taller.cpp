#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int X,Y;
	    cin>>X>>Y;
	    if(X>Y){
	        cout<<"A"<<endl;
	    }
	    else if(X<Y){
	        cout<<"B"<<endl;
	    }
	    else{
	        cout<<"Default";
	    }
	}

}
