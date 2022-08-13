#include <iostream>
#include <cstring>
using namespace std;

int main()
{
        string str ;
        getline(cin,str);
    int n=str.size();
        for (int i=0;i<n;i++)
        {

            if(str[i]==str[0]&&(int)str[0]>=97){

               str[i]=str[i]-32;

            }
            if(str[i]==' '&&(int)str[i+1]>=97){

                           str[i+1]=str[i+1]-32;

            }


        }
        cout <<str;

        return 0;
}
