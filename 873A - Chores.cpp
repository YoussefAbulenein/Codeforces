#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int k,n,x;
int sum=0;
cin>>k>>n>>x;
int arr[k];
sum=n*x;


for(int i=0;i<k;i++){

    cin>>arr[i];
}

sort(arr,arr+k);
reverse(arr,arr+k);
for(int i=n;i<k;i++){
sum=sum+arr[i];

}
cout << sum;
    return 0;
}

