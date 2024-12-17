#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i = 1;
    double pre, rate, itr, pay, pos, Total;

    cout << "Enter initial loan: ";
    cin >> pre;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;

    pos = pre;

    cout << setw(13) << left << "EndOfYear#"
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance"
         << "\n";

    while (pos > 0) {
        cout << fixed << setprecision(2);
        cout << setw(13) << left << i++;
        cout << setw(13) << left << pre;

        itr = pre * rate / 100;
        cout << setw(13) << left << itr;

        Total = pre + itr;
        cout << setw(13) << left << Total;

        if (pay > Total) pay = Total;
        cout << setw(13) << left << pay;

        pos = Total - pay;
        cout << setw(13) << left << pos;

        pre = pos;
        cout << "\n";
    }

    return 0;
}
