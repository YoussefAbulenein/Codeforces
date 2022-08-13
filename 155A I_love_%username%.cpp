#include <iostream>

using namespace std;

int main()
{
int mini=1e10,maxi=0,coun=0;
int n;

cin >>n;
int arr[n];

for(int i=0;i<n;i++){


    cin>>arr[i];

}
        mini=arr[0];
        maxi=arr[0];
for(int i=0;i<n;i++){

    if(arr[i]<mini){
        mini=arr[i];
        coun++;

        continue;
    }
    if(arr[i]>maxi){

        maxi=arr[i];
        coun++;

        continue;

    }


}
    cout<<coun;



    return 0;
}
