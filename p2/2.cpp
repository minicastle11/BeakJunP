#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;

    cin >> num1 >> num2;

    if (num1 < 0 && num2 < 0)
        result = 3;
    else if (num1 < 0 && num2 > 0)
        result = 2;
    else if (num1 > 0 && num2 > 0)
        result = 1;
    else
        result = 4;
        
    cout << result;
    return 0;
}