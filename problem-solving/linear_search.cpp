#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {10, 20, 30, 40, 50};

    int x;
    cin >> x;                    // المستخدم هو اللي يدخل الرقم

   int index = -1;              // -1 يعني "لسه ملقتوش"

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)         // نقارن العنصر الحالي بـ x (علامتين =)
        {
            index = i;           // نحفظ مكانه
            break;               // نوقف الـ loop أول ما نلاقيه
        }
    }

    cout << index << endl;       // الطباعة بعد الـ loop
    return 0;
}
