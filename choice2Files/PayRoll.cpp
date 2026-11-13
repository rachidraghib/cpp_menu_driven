
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    double rate, hours, gross, tax, net;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter hourly rate: ";
    cin >> rate;
    cout << "Enter hours worked: ";
    cin >> hours;

    // Gross Pay logic with overtime
    if (hours > 40) {
        gross = (40 * rate) + ((hours - 40) * (rate * 1.5));
    } else {
        gross = hours * rate;
    }

    tax = gross * 0.20; // Example 20% tax rate
    net = gross - tax;

    cout << "\n--- Payroll Slip ---\n";
    cout << "Employee: " << name << "\n";
    cout << "Gross Pay: $" << gross << "\n";
    cout << "Net Pay: $" << net <<endl;

    return 0;
}