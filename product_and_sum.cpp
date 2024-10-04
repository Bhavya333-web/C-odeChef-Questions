#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    int sum = 0;
    int product = 1;

    for (char digit : N) {
        int num = digit - '0';  // Convert char to int
        sum += num;
        product *= num;
    }

    cout << sum << " " << product << endl;
    return 0;
}