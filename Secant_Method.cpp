#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

#define f(x) (3 * (x) * (x) + 6 * (x) - 45)

int main() {
    system("title Pujar_447");
    int i = 1;
    double x1, x2, x3;
    double f1, f2, f3;
    double error = 1.0;
    double epsilon = 0.001;

    cout << "Enter the Initial Guess of x1 and x2: ";
    cin >> x1 >> x2;

    cout << "\nIteration No.\tRoot (x3)\tf(x3)\t\tError" << endl;
    cout << "---------------------------------------------------------" << endl;

    while (error >= epsilon && i <= 100) {
        f1 = f(x1);
        f2 = f(x2);

        if (f2 - f1 == 0) {
            cout << "Division by zero. Method cannot continue." << endl;
            return 0;
        }

        x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);
        f3 = f(x3);
        if (x3 != 0) {
            error = fabs((x3 - x2) / x3);
        }

        cout << i << "\t\t"
             << fixed << setprecision(6) << x3 << "\t"
             << fixed << setprecision(6) << f3 << "\t"
             << fixed << setprecision(6) << error << endl;

        if (f3 == 0.0) {
            break;
        }
        x1 = x2;
        f1 = f2;
        x2 = x3;
        f2 = f3;

        i++;
    }

    cout << "---------------------------------------------------------" << endl;
    cout << "\nAfter " << i - 1 << " iterations, the root of the equation = "
         << fixed << setprecision(6) << x3 << endl;

    return 0;
}
