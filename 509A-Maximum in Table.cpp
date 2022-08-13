#include <iostream>

using namespace std;

int main()
{
int n,i,b;

cin>>n;

int arr[n][n];

for ( i=0;i<1;i++){
for ( b=0;b<n;b++){

    arr[i][b]=1;

}
}
for (i=0;i<n;i++){
for ( b=0;b<1;b++){

    arr[i][b]=1;

}
}
for ( i=1;i<n;i++){
for (b=1;b<n;b++){

    arr[i][b]=arr[i-1][b]+arr[i][b-1];

}

}
cout <<arr[i-1][b-1];
    return 0;
}
