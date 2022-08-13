#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{int i=0;

    int x1=1,x2=0;
    vector <int>a;
    vector <int>a1;
    vector <int>a2;
    vector <int>a3;
    int n,s1=0,s2=0,s3=0;
cin >> n;

    for(int i =0;i<n;i++){
         int x;
         cin >>x;
        a.push_back(x);
        }
sort(a.begin(),a.end());
reverse(a.begin(),a.end());

for(int i =0;i<n;i++){
    if(a[i]<0&&x1>0){
a1.push_back(a[i]);
        s1++;
        x1=x1*a[i];
    }

else if(a[i]<0&&x2<=0||a[i]>0&&x2<=0){
  a2.push_back(a[i]);
  x2++;
    x2=x2*a[i];
    s2++;
}
else{
    a3.push_back(a[i]);
    s3++;
}
}
reverse(a2.begin(),a2.end());

cout<<s1<<" ";
for(int i=0;i<a1.size();i++)
{
cout<<a1[i]<<" ";
}
cout<<endl<<s2<<" ";
for(int i=0;i<a2.size();i++)
{
cout<<a2[i]<<" ";
}
cout<<endl<<s3<<" ";
for(int i=0;i<a3.size();i++)
{
cout<<a3[i]<<" ";
}


   return 0;
}
