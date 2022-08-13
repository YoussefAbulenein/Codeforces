#include <iostream>

using namespace std;

int main()
{
int i,n,q,p,c=0;

    cin >>n;

    for (i=0;i<n;i++){

        cin >>q>>p;
     if(q<p-1){
        c++;
     }
    }

    cout <<c;

    return 0;
}
