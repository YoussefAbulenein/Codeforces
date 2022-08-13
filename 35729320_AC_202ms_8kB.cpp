#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
long long t,n,d;
int flag;
cin>>t;
while(t--){
    flag=0;
    cin>>n>>d;
    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
        if(arr[i]>d){
            flag++;
        }
    }
   if(flag>0){

     sort(arr,arr+n);
     if(arr[0]+arr[1]<=d)
     {
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }
    else
    {
        cout<<"YES"<<endl;

    }




}
    return 0;
}
