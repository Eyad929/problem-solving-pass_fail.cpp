#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 3, 3, 7, 3};

    int x;
    cout << "Enter your number: ";
    cin >> x;

    int count = 0;                       // لسه ملقيناش ولا مرة

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)                 // نقارن (علامتين =)
        {
            count = count + 1;           // كل مرة نلاقيه نزوّد 1
        }                                // مفيش break: لازم نكمّل لآخر الـ array
    }

    cout << count << endl;               // الطباعة بعد الـ loop
    return 0;
}
