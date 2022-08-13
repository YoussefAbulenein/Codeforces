#include <iostream>

using namespace std;

int main()
{

    long long num ,temp, k;
    cin >> num >> k ;
    temp = (num +1)/2;

    if(k<=temp)
    {
        cout << (k*2)- 1;
    }
else
    {
        cout << (k-temp)*2;

}



return 0;
    }

