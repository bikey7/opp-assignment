#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check for invalid input
    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
    }
    else
    {
        // Calculate and display the factorial
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}
