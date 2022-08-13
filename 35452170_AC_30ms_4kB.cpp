#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

int n,p;
    int i=0;
    int d[20];

cin >>n>>p;
int a[50+5];
int arr[n];
for(i=0;i<p;i++){

    cin>>a[i];
}
sort(a,a+p);int mn=1e6;
for(int k=0;k<=p-n;k++){
 mn=(min(mn,a[k+n-1]-a[k]));



}

cout<<mn;

    return 0;
}
