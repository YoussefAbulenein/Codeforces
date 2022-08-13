#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
string s,b;

getline(cin,s);
getline(cin,b);
reverse(s.begin(),s.end());
if(s==b){
    cout <<"YES";
    return 0;
}
cout <<"NO";
    return 0;
}
