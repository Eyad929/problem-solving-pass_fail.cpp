#include <iostream>
#include <array>
using namespace std;

int main()
{
array < int , 7 > numbers = { 1, 2, 3, 4, 5, 6, 7,};
 int count = 0;   //  العداد 
 for (int  i = 0; i < 7; i++)
 {
  if (numbers[i] % 2 == 0)
  {
  count = count + 1 ;   
  }

 }
    cout << count << endl;
return 0;

}
