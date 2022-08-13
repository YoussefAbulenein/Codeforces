#include <iostream>
#include <algorithm>
using namespace std;
bool isaccepted(long long a,long long b){

if(b<=a){
    return 1;}
return 0;

}
long long n,countn=0,m,a[100000 + 5],b[100000 + 5], c[100000 + 5], sum = 0;

int main()
{
    cin>> n;
    cin>>m;



for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
            sum=a[i]+sum;
            c[i]=a[i]-b[i];

    }

    sort(c,c+n);
    reverse(c,c+n);
if(isaccepted(m,sum)==1){

        cout<<0;
return 0;
}
if(isaccepted(m,sum)!=1){
for(int i=0;i<n;i++){
countn++;
sum-=c[i];

 if(isaccepted(m,sum)==1){
    cout << countn;
    return 0;


 }}
 if(isaccepted(m,sum)==1){
    cout << n;
    return 0;
 }
}

 cout<<-1;
        return 0;
}
