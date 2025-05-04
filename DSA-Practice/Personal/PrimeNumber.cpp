#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    cout<<endl;
    bool isPrime = true;

    for (int i = 2; i <= num/2; i++)
    {
        if(num % 2 == 0) 
        {
            isPrime = false;
            break;
        }
    }

    cout<<"Is is "<< (isPrime ? "Prime" : "not Prime");


    return 0;
}