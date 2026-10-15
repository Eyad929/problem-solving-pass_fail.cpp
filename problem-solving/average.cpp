#include <iostream>
#include <array>
using namespace std;

int main()
{
array < int , 4 > numbers = { 1, 2, 3, 4};
double average ; 
double sum = 0;
for (int i = 0; i < 4; i++)
{
sum = sum + numbers[i];

}
average = sum / 4;
cout << " sum is = " << average << endl;

return 0;

}
