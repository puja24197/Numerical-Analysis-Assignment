#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define f(x) (3.0 * (x) * (x) + 6.0 * (x) - 45.0)
int main() {
    system("title Pujar_447");
    int i = 1;
    double x1, x2, xr;
    double f1, f2, fr;
     double e =1.0;
    double prev_xr = 0.0;

    cout <<"Enter the Initial Guess of x1 and x2: ";
    cin >> x1 >> x2;

      f1 =f(x1);
     f2 = f(x2);

    if (f1 * f2 > 0) {
        cout << "x1 and x2 do not bracket the root." << endl;
        return 0;
    }

    cout << "\nIteration No.\tRoot(xr)\tf(xr)\t\tError" << endl;
    cout << "-------------------------------------------------------------" << endl;

    while (e >= 0.001 && i <= 100) {
        f1 = f(x1);
        f2 = f(x2);
        xr = x1 - (f1 * (x2 - x1)) / (f2 - f1);
        fr = f(xr);

        if (i > 1) {
            e = fabs((xr - prev_xr) / xr);
        }

        if (i == 1) {
            cout << i << "\t\t"
                 << fixed << setprecision(6) << xr << "\t"
                 << fixed << setprecision(6) << fr << "\t"
                 << "-" << endl;
} else {
            cout << i << "\t\t"
                 << fixed << setprecision(6) << xr << "\t"
                 << fixed << setprecision(6) << fr << "\t"
                 << fixed << setprecision(6) << e << endl ;
        }

    if (fr == 0.0) {
            break;
    }

        if (f1 * fr < 0) {
            x2 = xr;
        } else {
    x1 = xr;
        }

    prev_xr = xr;
        i++;
    }

cout << "\nAfter " << i - 1 << " iterations, the root of the equation = "
         << fixed << setprecision(6) << xr << endl;

return 0;
}
