// Check if array is sorted 
#include <iostream>
#include <array>
using namespace std;

int main()
{
   array < int , 6 > nums = { 1, 3, 10, 5, 60, 7};
   bool sorted = true ;
   for (int i = 0; i < 5 ; i++)  
   {
      if (nums[i] > nums[i + 1])
      {
         sorted = false ;
          break;
      }
      
   }
    if (sorted )
    {
      cout << " Sorted \n";
    }

    else {
      cout << " NOT sorted";
    }
    return 0;
}
