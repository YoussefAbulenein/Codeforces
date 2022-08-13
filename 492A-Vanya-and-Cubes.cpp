#include <iostream>

using namespace std;

int main()
{
    int n,c=0,i,a=0;

    cin >>n;
if(n==1){
    c=1;
        cout <<c;

    exit(0);
}

else {for(i=1;n>0;i++){
    a=a+i;
    n=n-a;
    c++;
}
if(n>=0){
 cout<<c;

}
 else{

     cout<<c-1;


 }


        return 0;
}}
