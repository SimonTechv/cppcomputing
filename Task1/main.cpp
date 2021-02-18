#include <iostream>
#include <cmath>

#define debug 0

using namespace std;

/*

Task 1 Var 5
+------------------+--------------------------------------------+
| Input variables  |                   Values                   |
+------------------+--------------------------------------------+
| x:               | -15.246                                    |
| y:               | 0.04642                                    |
| z:               | 2000.1                                     |
| Expected output: | -182.036                                   |
| Source code:     | https://github.com/SimonTechv/cppcomputing |
+------------------+--------------------------------------------+

*/

//formula calculation function, return double;

double computing(double x, double y, double z) {
#if debug == 1 
    cout << "Accepted:\nx: " << x << "\ny: " << y << "\nz: " << z << endl;
#endif
    double result = log(pow(y,-sqrt(abs(x))))*(x-y/2) + pow(sin(atan(z)),2);
    return result;
}

int main(){

    double x{}, y{}, z{}; // there i used uniform-init variables;

    cout << "Enter x _> "; 
    cin >> x;                  // input x(double);
    cout << "Enter y _> ";
    cin >> y;                  // input y(double);
    cout << "Enter z _> ";
    cin >> z;                  // input z(double);

    cout << "Result: " << computing(x,y,z) << endl; // output result;

}

