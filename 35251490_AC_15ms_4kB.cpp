#include <iostream>

using namespace std;

int main()
{
    char k;
    int n;
    int flag=0;
    cin >>n;
    cin>>k;
    while(n--)
    {

        string s;
        cin>>s;
        bool good=true;
        for(char i='0'; i<=k ;i++){

            if(s.find(i)==-1){
                good=false;
                break;
            }


        }

        if(good==true)
        {
            flag++;
        }

    }
    cout<<flag;
    return 0;
}