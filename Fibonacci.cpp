#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main()
{
	Fibonacci fib_val(1);
    int val = fib_val.getFibonacciVal(9);
    cout << val << endl;
    return 0;
}