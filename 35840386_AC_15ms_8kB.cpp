#include <iostream>

using namespace std;

int main()
{
int n,s=0;
cin >>n;

int arr[n];

for(int i=0;i<n;i++){


    cin>>arr[i];

if(arr[i]==1){
    s++;

}
}
cout<<s<<endl;
for(int i=0;i<n;i++){

    if(arr[i]>=arr[i+1]||i==n-1)
   {

    cout<<arr[i]<<" ";
   }
}



    return 0;
}