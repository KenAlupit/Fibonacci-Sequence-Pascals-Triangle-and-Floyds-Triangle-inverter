#include <iostream>
using namespace std;

void InvertedFibonacciSequence(int n){
    int* a = new int[n];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}
int InvertedPascalsTriangle(int input){
    int rows = input, coef = 1;
    for (int i = rows - 1; i >= 0; --i)
    {
        for (int space = 0; space <= rows-i ; space++)
            cout << "  "; 
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            cout << coef << "   ";
        }
        cout << endl;
    }
    return 0;
}
int InvertedFloydsTriangle(int input) {
    int rows = input, number = 0;
    for (int i = rows-1; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            ++number;
        }
    }
    for (int i = rows-1; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << number << " ";
            --number;
        }
        cout << endl;
    }
    return 0;
}
int main()
{   
        int input;
        cout << "Please choose an option below:" << endl
            << "1 - Inverted Fibonacci Sequence" << endl
            << "2 - Inverted Pascals Triangle" << endl
            << "3 - Inverted Floyds Triangle" << endl;
        cin >> input;
        switch (input){ 
            case 1:
                cout << "Input the range:";
                cin >> input;
                InvertedFibonacciSequence(input);
                break;
            case 2:
                cout << "Input rows:";
                cin >> input;
                InvertedPascalsTriangle(input);
                break;
            case 3:
                cout << "Input rows:";
                cin >> input;
                InvertedFloydsTriangle(input);
                break;
            default:
                cout << "Invalid Input";
                break;
        } 
}