#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> numbers = {2, 5, 3, 6, 10};

    int max = numbers[0];            // أول رقم هو max في الأول

    for (int i = 1; i < 5; i++)      // نبدأ من index 1 ونوقف عند index 4
    {
        if (numbers[i] > max)        // نقارن عنصر واحد: numbers[i]
        {
            max = numbers[i];
        }
    }

    cout << max;                     // الطباعة مرة واحدة بعد الـ loop
    return 0;
}
