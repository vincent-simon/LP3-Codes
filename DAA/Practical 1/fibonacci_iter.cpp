#include<iostream>
using namespace std;

int fibonacciLoop(int nthNumber) {
        //use loop
        int previouspreviousNumber, previousNumber = 0, currentNumber = 1;

        for (int i = 1; i < nthNumber ; i++) {

            previouspreviousNumber = previousNumber;

            previousNumber = currentNumber;

            currentNumber = previouspreviousNumber + previousNumber;

        }
        return currentNumber;
}

int main(){
    int n;
    cout<<"Enter n for finding nth Fibonacci number "<<endl;
    cin>>n;

    cout<<"The nth fibonacci number is "<<endl;
    cout<<fibonacciLoop(n)<<endl;
    return 0;
}
