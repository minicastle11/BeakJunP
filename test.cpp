#include <iostream>

using namespace std;

// int main()
// {
//     string a = "pqpyyy";
//     int count1 = 0;
//     int count2 = 0;

//     for (int i = 0; i < a.size(); i++)
//     {
//         if (a[i] == 'p')
//             count1++;
//         else if (a[i] == 'y')
//             count2++;
//     }
//     if (count1 == 0 || count2 == 0)
//         cout << "true" << endl;
//     else if (count1 == count2)
//         cout << "true" << endl;
//     else
//         cout << "false" << endl;
//     return 0;
// }

// int main()
// {
//     int number, num;
//     double rate[10];
//     cin >> number;

//     for (int i = 0; i < number; i++)
//     {
//         double sum = 0;
//         double average = 0;
//         double count = 0;
//         int jumsu[10];
//         cin >> num;
//         for (int j = 0; j < num; j++)
//         {
//             cin >> jumsu[j];
//             sum += jumsu[j];
//         }
//         average = sum / num;
//         for (int j = 0; j < num; j++)
//         {
//             if (average < jumsu[j])
//                 count++;
//         }
//         rate[i] = count / num * 100;
//     }
//     for (int i = 0; i < number; i++)
//     {
//         cout << rate[i] << "%" << '\n';
//     }

//     return 0;
// }

int main()
{
    int number;
    cin >> number;
    int num[100];
    int dou[number];
    for (int i = 0; i < number; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < number; i++)
    {
        int count = 0;
        for (int j = 0; j < number; j++)
        {
            if (num[i] == num[j])
                count++;
        }
        if (count < 2)
            cout << num[i];
    }

    return 0;
}