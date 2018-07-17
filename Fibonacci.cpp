#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main()
{
	Fibonacci fibVal(1);

    cout << "Enter a sequence value: ";
    int seqVal;
    cin >> seqVal;

    int val = fibVal.getFibonacciVal(seqVal);
    cout << val << endl;
    
    return 0;
}