#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op, q;
    while(true){
        cout << "Enter first number :";
        cin >> a;
        cout << "Enter Second number :";
        cin >> b;

        cout << "Enter any of these operations '+', '-', '*', '/', '%' : ";
        cin >> op;

            switch(op){
                case '+':
                    cout << "Addition of two numbers " << (a+b) << endl;
                    break;
                case '-':
                    cout << "Subtraction of two numbers " << (a-b) << endl;
                    break;
                case '*':
                    cout << "Multiplication of two numbers " << (a*b) << endl;
                    break;
                case '/':
                    cout << "Division of two numbers " << (a/b) << endl;
                    break;
                case '%':
                    cout << "Remainder after division " << (a%b) << endl;
                    break;
                default:
                    cout << "Wrong input" << endl;
        }
        cout << "Enter q to exit" << endl;
        cin >> q;
        if(q=='q'){
            break;
        }
    }

    return 0;
}
