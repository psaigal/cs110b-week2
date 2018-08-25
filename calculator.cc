#include <cmath>
#include <iostream>
using namespace std;

int main()
{
        double num1 = 0;
        double num2 = 0;
        double result;
        int choice;

        cout << "Enter your choice(Pick 1-9)" << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division " << endl;
        cout << "5. Square Root " << endl;
        cout << "6. Square " << endl;
        cout << "7. Cube Root " << endl;
        cout << "8. Cube " << endl;
        cout << "9. Power " << endl;

        cin >> choice;

        switch(choice)
        {
        case 1:
                cout << "Enter your first number to add" << endl;
                cin >> num1;

                cout << "Enter your second number to add" << endl;
                cin >> num2;

                result = num1 + num2;
                cout << "Result is: " << result << endl;
                break;
        case 2:
                cout << "Enter your first number to subtract" << endl;
                cin >> num1;

                cout << "Enter your second number to subtract" << endl;
                cin >> num2;

                result = num1 - num2;
                cout << "Result is: " << result << endl;
                break;
        case 3:
                cout << "Enter your first number to multiply" << endl;
                cin >> num1;

                cout << "Enter your second number to multiply" << endl;
                cin >> num2;

                result = num1 * num2;
                cout << "Result is: " << result << endl;
                break;
        case 4:
                cout << "Enter your first number to divide" << endl;
                cin >> num1;

                cout << "Enter your second number to divide" << endl;
                cin >> num2;

                if (num2 == 0)
                {
                        cout << "Cannot divide by 0 or a negative number." << endl;
                }

                result = num1 / num2;
                cout << "Result is: " << result << endl;
                break;
         case 5:
                cout << "Enter your number to get square root" << endl;
                cin >> num1;

                result = sqrt(num1);
                cout << "Result is: " << result << endl;
                break;
        case 6:
                cout << "Enter your number to square" << endl;
                cin >> num1;

                result = num1 * num1;
                cout << "Result is: " << result << endl;
                break;
        case 7:
                cout << "Enter your number to get cube root" << endl;
                cin >> num1;

                result = cbrt(num1);
                cout << "Result is: " << result << endl;
                break;
        case 8:
                cout << "Enter your number to cube" << endl;
                cin >> num1;

                result = num1 * num1 * num1;
                cout << "Result is: " << result << endl;
                break;
        case 9:
                cout << "Enter your base number" << endl;
                cin >> num1;

                cout << "Enter your second number to raise your base to" << endl;
                cin >> num2;

                result = pow(num1, num2);
                cout << "Result is: " << result << endl;
                break;
        default:
                cout << "Invalid input.";
        }

}




