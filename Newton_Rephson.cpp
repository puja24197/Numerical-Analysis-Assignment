#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define N 100
#define f(x) (pow(x, 4) + 3.0 * pow(x, 3) - 2.0 * (x) * (x) - 12.0 * (x) - 8.0)
#define g(x) (4.0 * pow(x, 3) + 9.0 * (x) * (x) - 4.0 * (x) - 12.0)

int main() {
    system("title Pujar_447");
    float x0, x1, f0, g0, e = 1.0;
    int step = 1;
    cout << "Enter initial guess: ";
    cin >> x0;
    cout << "\n***************************************\n";
    cout << "      Newton Raphson Method\n";
    cout << "***************************************\n";
    cout << "\nIteration No.\tRoot(x1)\tf(x1)\t\tError" << endl;
    cout << "-------------------------------------------------------------" << endl;
    do {
        f0 = f(x0);
        g0 = g(x0);
        if (g0 == 0.0) {
            cout << "Derivative is zero. Method cannot continue." << endl;
            return 0;
        }
        x1 = x0 - (f0 / g0);

        if (x1 != 0) {
            e = fabs((x1 - x0) / x1);
        }
        cout << step << "\t\t"
             << fixed << setprecision(6) << x1 << "\t"
             << fixed << setprecision(6) << f(x1) << "\t"
             << fixed <<  setprecision(6) << e << endl;
        x0 = x1;
        step++;
        if (step > N) {
            cout << "\nNot Convergent." << endl;
            return 0;
        }
    } while (e > 0.001);
    cout << "\nRoot is: " << fixed << setprecision(6) << x1 << endl;
    return 0;
}
