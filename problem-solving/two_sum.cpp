
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 7> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 10;
    bool found = false;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                found = true;
            }
        }
    }

    if (found)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
