#include <iostream>
using namespace std;               
 
int main()  
{
    double A, B;
    char O;

    cout << "Enter 1 number: ";
    cin >> A;
    cout << "Enter 2 number: ";
    cin >> B;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> O;
    switch(O)
    {
        case '+':
            cout << "Result: " << A+B << '\n';
            break;
        case '-':
            cout << "Result: " << A-B << '\n';
            break;
        case '*':
            cout << "Result: " << A*B << '\n';
            break;
        case '/':
            cout << "Result: " << A/B << '\n';
            break;
    }


    return 0;
}