#include <iostream>

using namespace std;

int main()
{
    int c,i,n;
    cin>>c>>n;

    for(i=0;i<n;i++){

        if(c%10==0){

           c= c/10;
        }
        else{

            c--;
        }


    }
    cout <<c;

    return 0;
}