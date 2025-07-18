#include<vector>
#include<iostream>
using namespace std;


vector<int> fibonacci ( int n ){
    vector<int> result ;
    int first = 0;
    int second = 1;
    
    result.push_back(first);

    for (int i = 1; i < n; i++)
    {
        result.push_back(second);
        int temp = second;
        second = first + second;
        first = temp;
    }
    
    return result;
}

int main(){

    int n = 10;

    vector<int> result;
    result = fibonacci(n);
    cout<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }


    return 0;
}

