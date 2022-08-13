#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{


    int n;
    cin>> n;
    while(n--){
        string temp="",s;

        cin>>s;
        int n=s.size();
        temp+=s.substr(0,2);

        for (int i=3;i<=n;i+=2){

             temp+=s[i];
        }
                    cout<<temp<<endl;


    }

    return 0;
}
