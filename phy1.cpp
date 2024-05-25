#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    printf("(The value of theta must be in Degree.\nThe value of d must be in Micrometer.)\n");
    double m, theta, d;
    printf("Value of m = ");
    cin >> m;
    printf("Value of theta = ");
    cin >> theta;
    printf("Value of d = ");
    cin >> d;
    double rad = theta * pi / 180.0, sin_rad = sin(rad);
    d = d * 1000;
    double lambda = d * sin_rad / m;
    printf("The wavelength of light = %.9lf\n", lambda);
    if (lambda >= 380 && lambda <= 450)
        cout << "Color of the light: Violet.";
    else if (lambda > 450 && lambda <= 485)
        cout << "Color of the light: Blue.";
    else if (lambda > 465 && lambda <= 500)
        cout << "Color of the light: Cyan.";
    else if (lambda > 500 && lambda <= 565)
        cout << "Color of the light: Green.";
    else if (lambda > 565 && lambda <= 590)
        cout << "Color of the light: Yellow.";
    else if (lambda > 590 && lambda <= 625)
        cout << "Color of the light: Orange.";
    else if (lambda > 625 && lambda <= 750)
        cout << "Color of the light: Red.";
    else
        cout << "The light is not visible.";
    cout << "\n";
}
