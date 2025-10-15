#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num1, num2;
    cout << "Enter your fist floating point number:" << endl;
    cin >> num1;
    cout << "Enter your second floating point number:" << endl;
    cin >> num2;
    cout << "Sum is =" << setprecision(3) << num1 + num2 << endl;
    cout << "substraction is =" << setprecision(3) << num1 - num2 << endl;
    cout << "produt is =" << setprecision(3) << num1 * num2 << endl;
    cout << "quotion is =" << setprecision(3) << num1 / num2 << endl;
    // float variable cast into integer
    int A = (int)num1;
    int B = (int)num2;
    cout << "sum is =" << A + B << endl;
    cout << "substratin is =" << A - B << endl;
    cout << "product is=" << A * B << endl;
    cout << "quotion is =" << A / B << endl;
    return 0;
}
