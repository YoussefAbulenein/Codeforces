#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,mini;
int n;
cin >>n;
int m=0;
vector<int >v;
vector<int>v1;
vector<int>v2;
vector<int>v3;

for(int i=0;i<n;i++)
{

    int x;
    cin>>x;
    v.push_back(x);



}
int s1=std::count(v.begin(),v.end(),1);
int s2=std::count(v.begin(),v.end(),2);
int s3=std::count(v.begin(),v.end(),3);
if(s1==0||s2==0||s3==0){

    cout<<0;
    exit(0);
}
else{
     mini=min(s1,s2);
    mini=min(mini,s3);
    cout<<mini<<endl;
}
i=0;
int h=0;
vector<int>c(3);
while(n--){

    if(v[i]==1){


    v1.push_back(i+1);

    }
    else if(v[i]==2){

        v2.push_back(i+1);


    }
    else if(v[i]==3){

        v3.push_back(i+1);


    }

i++;
}
for(int i=0;i<mini;i++){


  cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;



}









    return 0;
}

