#include <iostream>
#include <iomanip> // for formatting output
#include <cmath>  // for extra math operations
using namespace std;

int main()
{
    cout << setw(3) << 6 << endl; // setw() sets width to that number and right justifies
    cout << setw(3) << 60 << endl;
    cout << setw(3) << 600 << endl;

    float f = 40
    cout << "Sqrt of 40 is " << sqrt(f) << endl;
    cout << setw(8) << fixed << setprecision(2)
         << sqrt(f) << endl;

    return 0;
}