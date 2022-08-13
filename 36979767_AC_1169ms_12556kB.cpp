#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
stack<string>s;
map<string,bool>exist;
cin>>n;
for(int i=0; i<n;i++){
    string s1;
    cin>>s1;
    s.push(s1);




}
for(int i=0;i<n;i++){

    if(!exist[s.top()]){
        cout<<s.top()<<endl;
        exist[s.top()]=true;
    }
    s.pop();
}



return 0;
}
