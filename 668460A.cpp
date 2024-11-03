#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t, tc = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << tc++ << ": ";
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double A = acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2));
        double B = asin((r2 * sin(A)) / r1);

        double area = B * r1 * r1 + A * r2 * r2 - sin(B) * d * r1;
        // cout << area << endl;
        double area1 = A * r2 * r2 - (r2 * r2 * sin(A * 2.0)) / 2.0;
        double area2 = B * r1 * r1 - (r1 * r1 * sin(B * 2.0)) / 2.0;
        // cout << endl
        //      << A * 180 / pi << " " << B * 180 / pi << " " << d << endl
        //      << endl;
        // cout << area1 << " " << area2 << endl
        //      << endl;
        // if (d > fabs(r2 - r1) && d < max(r2, r1))
        // {
        //     double x = min(r1, r2);
        //     area = pi * x * x - fabs(area2 - area1);

        //     printf("%.10lf\n", area);
        // }
        // else
        if (d == 0 || d <= fabs(r2 - r1))
        {
            double x = min(r1, r2);
            double ans = pi * x * x;
            printf("%.10lf\n", ans);
        }

        else if (d >= r1 + r2)
            cout << 0 << endl;
        else if (d > fabs(r2 - r1) && d < max(r1, r2) && A < B && A + B < pi / 3 * 2)
        {
            double x = min(r1, r2);
            area = pi * x * x - fabs(area2 - area1);

            printf("%.10lf\n", area);
        }
        else
        {
            // double area = area1 + area2;

            printf("%.10lf\n", area);
        }
        // else
        // {
        //     double x = min(r1, r2);
        //     double area = pi * x * x - fabs(area2 - area1);

        //     printf("%.10lf\n", area);
        // }
    }
}