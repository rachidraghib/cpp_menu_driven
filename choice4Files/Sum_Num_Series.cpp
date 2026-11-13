#include <iostream>

using namespace std;


int main()
{
	int n;
    int digit;

    // Input number of terms with validation
    cout << "Enter the number of terms (positive integer): ";cin>>n;
    while ( n <= 0) {
        cout<< "Invalid input. Please enter a positive integer. ";cin>>n;
        
    }
     long long term = 0;   // Current term in the pattern
     long long sum = 0;    // Sum of all terms

    cout << "Series: ";
    for (int i = 1; i <= n; ++i) {
        term = term * 10 + 2; // Append 2
        sum += term;
        cout << term;
        if (i < n) cout << " + ";
    }

    cout << "\nSum of the series: " << sum << endl;

    // Input digit for pattern with validation
    cout << "\nThat was digit 2. Enter any other digit for the pattern (0-9): ";cin>>digit;
    while ( digit < 0 || digit > 9) {
    cout << "Invalid input. Please enter a digit between 0 and 9. ";cin>>digit;
        
    }
    
	
		
	
    long long t = 0;   // Current term in the pattern
    long long s = 0;    // Sum of all terms

    cout << "Series: ";
    for (int i = 1; i <= n; ++i) {
        t = t * 10 + digit; // Append chosen digit
        s += t;
        cout << t;
        if (i < n) cout << " + ";
    }

    cout << "\nSum of the series: " << s << endl;
	
	
	
	
    return 0;
}