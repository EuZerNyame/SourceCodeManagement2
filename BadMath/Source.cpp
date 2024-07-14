#include <iostream>
#include <iomanip>
/* CIS 1202.201 - Daniel Blair. 7/14/2024.
This program calculates the average of three integers input by the user. It then displays the average to one decimal place.
 */
using namespace std;
float average(int i1, int i2, int i3)
{
    // Fix: Correct arithmetic operation to calculate the average
    return (i1 + i2 + i3) / 3.0f;
}
int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    cout << "This program calculates the average of three numbers." << endl;
    // Input the first number
    cout << "First number: "; cin >> n1;
    // Input the second number
    cout << "Second number: "; cin >> n2;
    // Fix: Correctly input the third number
    cout << "Third number: "; cin >> n3;
    // Calculate the average
    float a = average(n1, n2, n3);
    // Fix: Set fixed-point notation and precision to 1 decimal place
    cout << fixed << setprecision(2) << "The average is " << a << endl;
    return 0;
}