#include <iostream>
using namespace std;

int main()
{
    const int year = 12;//declaring constant
    double loanPayment, insurance, gas, oil, tires, maintenance;//declaring variables
    double monthlyTotal, yearTotal;

    cout << "This program will calculate the total monthly and annual ";//explaining use of program
    cout << "costs of your vehicle expenses." << endl << endl;

    cout << "Please enter the cost of your monthly loan payment. ";//asking for user input
    cin >> loanPayment;//input being assigned to variable
    cout << "Please enter the monthly cost of your insurance. ";
    cin >> insurance;
    cout << "Please enter the monthly cost of your gas. ";
    cin >> gas;
    cout << "Please enter the monthly cost of your oil. ";
    cin >> oil;
    cout << "Please enter the monthly cost fo your tires. ";
    cin >> tires;
    cout << "Please enter your monthly maintenance costs. ";
    cin >> maintenance;
    cout << endl << endl;

    monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;//processing
    yearTotal = monthlyTotal * year;

    cout << "Your total monthly cost is: $" << monthlyTotal;//displaying output
    cout << endl;
    cout << "Your total yearly cost is: $" << yearTotal;
    cout << endl << endl;

    return 0;

}