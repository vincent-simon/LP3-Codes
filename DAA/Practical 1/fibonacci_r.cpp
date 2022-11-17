#include <bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
 
int main(){
    int n;
    cout<<"Enter n for finding nth Fibonacci number "<<endl;
    cin>>n;

    cout<<"The nth fibonacci number is "<<endl;
    cout << fib(n)<<endl;
    getchar();
    return 0;
}