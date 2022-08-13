#include <iostream>

using namespace std;

int main()

{
    int arr[3][3],temp[3][3];

    for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
    arr[i][k]=1;

    }
    }



for(int i=0;i<3;i++){
for(int k=0;k<3;k++){

    cin >>temp[i][k];

if(temp[i][k]%2==1){



    arr[i][k]=!arr[i][k];
    if(i<2)
    arr[i+1][k]=!arr[i+1][k];
        if(k<2)

    arr[i][k+1]=!arr[i][k+1];
        if(k>0)

    arr[i][k-1]=!arr[i][k-1];
        if(i>0)

    arr[i-1][k]=!arr[i-1][k];
}

    }
    }

for(int i=0;i<3;i++){
for(int k=0;k<3;k++){

    cout<<arr[i][k];


    }
    cout <<endl;
    }


    return 0;
}
