#include <iostream>
#include "Fibonacci.h"

using namespace std;

#define STARTVAL 1

int main()
{
	Fibonacci fibVal(STARTVAL);

    cout << "Enter a sequence value: ";
    int seqVal;
    cin >> seqVal;

    int val = fibVal.getFibonacciVal(seqVal);
    cout << val << endl;
    
    return 0;
}