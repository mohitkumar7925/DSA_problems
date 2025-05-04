#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int i = 0;
    string output = "";
    while(n > 0 ){
        output = to_string(n % 2) + output;
        n = n/2;
    }

    cout<< output;

    return 0;
}