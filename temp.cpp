#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double temp;
    int choice;

    cout << "🌡️ Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << temp << "°C = " << celsiusToFahrenheit(temp) << "°F\n";
    } 
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << temp << "°F = " << fahrenheitToCelsius(temp) << "°C\n";
    } 
    else {
        cout << "❌ Invalid choice! Please run again.\n";
    }

    return 0;
}

