#include <iostream>

using namespace std;

int main()
{
        int n,flag=0,j=1;
int i=0;

        cin >>n;
        int arr[n];
        for(int i=0;i<n ;i++){

            cin>>arr[i];




        }

        for(i=1;i<n ;i++){

        if(arr[i]!=arr[i-1]){


            flag++;
        }




        }
cout<<flag+1;
        return 0;
}
