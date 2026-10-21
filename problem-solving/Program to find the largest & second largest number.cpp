// Program to find the largest & second largest number (single loop)
#include <iostream>
#include <array>
#include <climits>
using namespace std;

int main()
{
    array<int, 6> arr = {1, 4, 6, 3, 7, 9};

    int maxnum = INT_MIN;
    int second = INT_MIN;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxnum)
        {
            second = maxnum;    // الـ max القديم بقى هو التاني
            maxnum = arr[i];    // الرقم الجديد بقى هو الـ max
        }
        else if (arr[i] < maxnum && arr[i] > second)
        {
            second = arr[i];
        }
    }

    cout << "Largest number: " << maxnum << endl;

    if (second == INT_MIN)
    {
        cout << "There is no second largest number" << endl;
    }
    else
    {
        cout << "Second largest number: " << second << endl;
    }

    return 0;
}
