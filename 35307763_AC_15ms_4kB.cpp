#include <iostream>
#include <string>
using namespace std;

int main()
{        int n;
cin>>n;
while(n--){int flag=0;

        string  s;
        cin>>s;
        char mini=s[0];


        for(int i=0; i<s.size();i++){

            int flag=0;

            if(s[i]<mini){
                mini=s[i];
            }


            }
            for(int i=0; i<s.size();i++){
                char g=mini+i;
                if(s.find(g)==-1)
                {

flag++;
                }

            }
if(flag>0)
{
                cout<<"No"<<endl;

}
           else{ cout<<"Yes"<<endl;

           }
}

        return 0;
}
