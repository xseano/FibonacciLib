#ifndef FIBONACCI_H
#define FIBONACCI_H

/**
    Fibonacci.h
    Purpose: Returns the Fibonacci number based on sequence number input

    @author Kuldip Oberoi
    @version 0.1 18/07/06 
*/

class Fibonacci
{
    public:

    /**
    Default Constructor 
    */
    Fibonacci();
    /**
    Constructor that allows caller to set the start sequence

    @param startVal 0 or 1 per Fibonacci algorithm
    */
    Fibonacci(int startVal);

    /**
    Constructor that allows caller to set the start sequence and max sequence value

    @param startVal Starting value, 0 or 1, per Fibonacci algorithm
    @param maxVal Override default max sequence to be allowed 
    */
    Fibonacci(int startVal, int maxVal);

    /**
    Constructor that allows caller to set the start sequence and max sequence value

    @param sequenceVal Position value to return in the Fiboonacci sequence
    @return Fiboonacci value based on input sequence number
    */
    int getFibonacciVal(int sequenceVal);
};

#endif
