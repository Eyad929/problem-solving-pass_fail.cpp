#include <iostream>
using namespace std;
int main()
{  int n;
    
    cout <<"Please enter your number \n";
cin >> n;
cout<<"Your number is : " << n << endl;
    int sum =0;
    for (int i=1; i<=n; i++)

    { 
        sum = sum + i; 
    }
   cout<< "your sum is : " << sum << endl;
    return 0;
}
