#include <iostream>
using namespace std;

int main() {

    // Constants
    const int NUM_MONTHS = 12;

    // Variables
    int years,
        rain,
        totalRain = 0;

    // Prompt to enter number of years
    cout << "Enter the number of years: ";
    cin >> years;

    // Input validation for number of years
    while (years < 1) {
        cout << "Invalid number of years."
             << "Please enter at least 1 year: ";
        cin >> years;
    }

    // Loops through the number
    // of years input by user
    for (int countYears = 0;
             countYears < years;
             ++countYears)
    {
        // Loops through all 12 months
        for (int countMonths = 0;
                 countMonths < NUM_MONTHS;
                 ++countMonths)
        {
            cout << "Enter the inches of "
                    "rainfall for the month: ";
            cin >> rain;
            totalRain += rain;
        }
    }

    // Prints final results
    cout << "Number of months: "
         << years * 12 << endl;

    cout << "Total inches of rainfall: "
         << totalRain << endl;

    cout << "Average rainfall per month: "
         << totalRain / (years * 12) << endl;

    return 0;
}