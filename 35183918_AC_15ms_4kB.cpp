#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
        int r;
        cin>>r;


        while(r--){
        string s;
        cin >>s;

        int n=s.size();
         if(n>10)
          {
              cout<<s[0]<<n-2<<s[n-1]<<endl;


          }
            else{
                cout<<s<<endl;
            }



        }


        return 0;
}
