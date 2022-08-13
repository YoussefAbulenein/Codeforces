#include <iostream>

using namespace std;

int main()
{
    int n,c,i,sum=0,b,a;

    cin>>n;
    c=n-1;
    int arr[c];
    for (i=0;i<c;i++){

        cin>>arr[i];


    }
    cin>>b>>a;

    for(i=b-1;i<a-1;i++){


        sum+=arr[i];
    }
        cout<<sum;
    return 0;
}
