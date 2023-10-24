#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
    double qp, qk, z;
    int n;
    cout << "qp = "; cin >> qp;
    cout << "qk = "; cin >> qk;
    cout << "n = "; cin >> n;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "q" << " |"
        << setw(10) << "z" << " |" << endl;
    cout << "-------------------------------------------------" << endl;


    double dq = (qk - qp) / n;
    double q = qp;
    while (q <= qk)
    {
        z = h(q + 1) + h(q * q + 1) + pow(h(q * q), 2);
        cout << "|" << setw(7) << setprecision(4) << q << " |"
            << setw(10) << setprecision(4) << z << " |" << endl;


        q += dq;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}
double h(const double x)
{
    if (abs(x) >= 1)
        return (cos(x) + 1) / (pow(cos(x), 2) + 1);
    else
    {
        double S = 0;
        int j = 0;
        double a = 1;
        S = a;
        do
        {
            j++;
            double R = -x * x / ( (2 * j - 1) * 2 * j);
            a *= R;
            S += a;
        } while (j < 4);
        return S / cos(x);
       
    }
}