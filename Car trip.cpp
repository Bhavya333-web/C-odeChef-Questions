#include <bits/stdc++.h>
using namespace std;

int main() {
	
int T;
cin >>T;
for(int i =0;i<T;i++){
    int X;
    cin >>X;
    if(X<300){
        cout<<300*10<<endl;
    }
    else if(X>=300){
        cout<<X*10<<endl;
    }
}
}
