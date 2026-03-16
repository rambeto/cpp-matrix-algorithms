/*
Problem #22
Print Fibonacci Series using Recursion.

Concepts:
- Recursion (Self-calling functions)
- Base Case and Recursive Case
- Functional Programming logic
*/

#include <iostream>

using namespace std;

/*
-----------------------------------------------------------
Function: PrintFibonacciUsingRecursion
Purpose : Generate and print Fibonacci elements using recursive calls.
-----------------------------------------------------------
*/
void PrintFibonacciUsingRecursion(short Number, int Prev1, int Prev2)
{
    if (Number > 0)
    {
        int FebNumber = Prev1 + Prev2;
        cout << FebNumber << "  ";

        // Recursive call: Number decrements, and previous values update
        PrintFibonacciUsingRecursion(Number - 1, FebNumber, Prev1);
    }
}

int main()
{
    // Generating 10 Fibonacci numbers starting after 0 and 1
    // Initial call: Number=10, Prev1=1, Prev2=0
    
    cout << "\nFibonacci Series using Recursion (10 elements):\n";
    
    // We can print the first element manually if needed, 
    // or let the recursion handle the sum.
    PrintFibonacciUsingRecursion(10, 1, 0);

    cout << endl;
    system("pause>0");
    return 0;
}
