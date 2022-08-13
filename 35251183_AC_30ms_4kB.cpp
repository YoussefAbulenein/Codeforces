#include <iostream>

using namespace std;

int main()
{
string s;
int n;
cin>>n;
int flag=0;
cin>>s;

for(int i=0;i<s.size()-1;i++){



    if(s[i]==s[i+1]){


        flag++;
    }




}

cout << flag;
    return 0;
}
