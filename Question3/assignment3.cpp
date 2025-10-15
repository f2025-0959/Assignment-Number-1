#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter firstNumber:" << endl;
    cin >> num1;
    cout << "Enter second Number" << endl;
    cin >> num2;
    cout << "Enter third Number" << endl;
    cin >> num3;

    // Check if all numbers are equal
    if (num1 == num2 && num2 == num3)
    {
        cout << "All numbers are equal." << endl;
    }
    else
    {
        // Find the largest number
        int largest;
        if (num1 > num2 && num1 > num3)
            largest = num1;
        else if (num2 > num1 && num2 > num3)
            largest = num2;
        else
        {
            largest = num3;
        }
        // Find the smallest number
        int smallest;
        if (num1 < num2 && num1 < num3)
            smallest = num1;
        else if (num2 < num1 && num2 < num3)
            smallest = num2;
        else
        {
            smallest = num3;
        }

        // Display results
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    }

    return 0;
}