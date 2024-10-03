 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int factorial = 1;
	int i =1;
do{
    factorial = factorial* i;
    i++;
}while(i<=x);
cout<<factorial;

}
