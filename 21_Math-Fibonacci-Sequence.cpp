/*
Problem #21
Print Fibonacci Series using Loops.

Concepts:
- Loops (For Loop)
- Fibonacci Sequence Logic
- Variable Swapping / Updating
*/

#include <iostream>

using namespace std;

/*
-----------------------------------------------------------
Function: PrintFibonacciUsingLoop
Purpose : Generate and print Fibonacci series up to N elements.
-----------------------------------------------------------
*/
void PrintFibonacciUsingLoop(short Number)
{
    long long FebNumber = 0;
    long long Prev2 = 0, Prev1 = 1;

    // Standard Fibonacci starts: 1, 1, 2, 3, 5... (if ignoring the initial 0)
    cout << "1  "; 

    for (short i = 2; i <= Number; ++i)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "  ";
        
        // Update previous numbers for the next iteration
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
    cout << endl;
}

int main()
{
    // Generating 10 Fibonacci numbers
    cout << "\nFibonacci Series (10 elements):\n";
    PrintFibonacciUsingLoop(10);

    system("pause>0");
    return 0;
}
