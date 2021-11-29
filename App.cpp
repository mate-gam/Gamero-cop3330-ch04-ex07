#include <iostream>
using namespace std;
int checkNum(string num)
{
    if (num == "1" || num =="one")
    {
        return 1;
    }
    if (num == "2" || num =="two")
    {
        return 2;
    }
    if (num == "3" || num =="three")
    {
        return 3;
    }
    if (num == "4" || num =="four")
    {
        return 4;
    }
    if (num == "5" || num =="five")
    {
        return 5;
    }
    if (num == "6" || num =="six")
    {
        return 6;
    }
    if (num == "7" || num =="seven")
    {
        return 7;
    }
    if (num == "8" || num =="eight")
    {
        return 8;
    }
    if (num == "9" || num =="nine")
    {
        return 9;
    }
    if (num == "0" || num =="zero")
    {
        return 0;
    }
    return 0;
}
int main()
{
    string operation;
    string num1, num2;
    int number1, number2;
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "Please enter the operation: ";
    cin >> operation;
    number1 = checkNum(num1);
    number2 = checkNum(num2);
    if (operation == "+")
    {
        cout << number1 + number2;
    }
    if (operation == "-")
    {
        cout << number1 - number2;
    }
    if (operation == "*")
    {
        cout << number1 * number2;
    }
    if (operation == "/")
    {
        cout << number1 / number2;
    }
}