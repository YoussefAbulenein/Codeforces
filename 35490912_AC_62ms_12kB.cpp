#include <iostream>

using namespace std;

int main()
{
int n,maxi=0,sum=0;

cin >>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){


    cin>>a[i]>>b[i];

    sum=(b[i]-a[i])+sum;
    maxi=max(maxi,sum);
}
cout<<maxi;



    return 0;
}
