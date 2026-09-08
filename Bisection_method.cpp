#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define N '\n'

#define f(x) ((x) * tan(x) - 1.0)

int main() {
    double a, b, Xmid, fa, fb, fmid, e = 1.0, prev = 0.0;

    cout << "Enter lower bound a and upper bound b: ";
    cin >> a >> b;

     fa =f(a);
    fb = f(b);
    int iteration= 1;

    if (fa * fb > 0) {
        cout << "a and b do not bound any root" << endl;
        exit(0);
    }

    cout << "\nIteration No.\tRoot\t\tf(Xmid)\t\tError" << endl;
    cout << "-------------------------------------------------------------" << endl;

    while (e >= 0.001 && fa != 0 && iteration != 100) {
        fa = f(a);
        fb = f(b);

        Xmid = (a + b) / 2.0;
          fmid =f(Xmid);

        if (iteration > 1) {
            e =fabs((Xmid - prev) / Xmid);
        }

        if (fmid ==0.0) {
            break;
        }
        if (fa * fmid < 0) {
            b = Xmid;
        } else {
            a = Xmid;
        }
        if (iteration == 1) {
            cout << iteration << "\t\t"
                 << fixed<< setprecision(6) << Xmid << "\t"
                 << fixed << setprecision(6) << fmid << "\t"
                  << "-" << endl;
        } else {
            cout << iteration << "\t\t"
                 << fixed << setprecision(6) << Xmid << "\t"
                 << fixed << setprecision(6) << fmid << "\t"
                 << fixed << setprecision(6) << e << endl;
        }

        prev = Xmid;
          iteration++;
    }

    return 0;
}
