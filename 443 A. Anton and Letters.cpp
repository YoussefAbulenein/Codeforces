#include <iostream>

using namespace std;

int main()
{

string s;
getline(cin,s);
int flag=0;
for(char i='a';i<='z';i++){

    if(s.find(i)!=-1)
{



        flag++;
    }

}
cout << flag;


    return 0;
}
