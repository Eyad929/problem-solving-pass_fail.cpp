// // Reverse Array (in-place)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    int i = 0;
    int k = nums.size() - 1;

    while (i < k)
    {
        int temp = nums[i];
        nums[i] = nums[k];
        nums[k] = temp;
        i++;
        k--;
    }

    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    int i = 0;
    int k = nums.size() - 1;

    while (i < k)
    {
        int temp = nums[i];
        nums[i] = nums[k];
        nums[k] = temp;
        i++;
        k--;
    }

    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << " ";
    }
    cout << endl;

    return 0;
}
