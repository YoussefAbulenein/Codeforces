#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
string s;
cin >>n;
int mini=1000000000;
cin>>s;
int m=0;
int arr[n];
int t[200000];
for(int i=0;i<n;i++){

    cin>>arr[i];

}
for(int i=1;i<n;i++){
    if(s[i-1]=='R'&&s[i]=='L')
{
int x=(arr[i]-arr[i-1])/2;
    mini= min(mini,x);
    m++;
}


}
if(m==0){

    cout<<-1;

}
else{

    cout<<mini;
}

    return 0;
}
