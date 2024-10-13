#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int X,Y;
	    cin>>X>>Y;
		
	    if(X>Y){
	        cout<<X<<endl;
	    }
	    else if(X<Y){
	        cout<<Y<<endl;
	        
	    }
	    else if(X==Y){
	        cout<<X<<endl;
	    }
	    else{
	        cout<<"Default";
	    }
	}

}
