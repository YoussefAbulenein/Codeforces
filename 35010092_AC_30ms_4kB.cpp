#include <iostream>

using namespace std;

int main()
{
    int n,i,k,c,flag=0,co=0;
    cin>>n;

    for(i=0;i<n;i++){flag=0;
    for(c=0;c<3;c++){

    cin>>k;
           if(k==1){
            flag++;
           }

        }
        if(flag>=2){

            co++;
        }
    }
    cout <<co;



    return 0;
}
