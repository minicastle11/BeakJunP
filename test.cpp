#include <iostream>

using namespace std;

int main()
{
    string a = "pqpyyy";
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'p')
            count1++;
        else if (a[i] == 'y')
            count2++;
    }
    if (count1 == 0 || count2 == 0)
        cout << "true" << endl;
    else if (count1 == count2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
