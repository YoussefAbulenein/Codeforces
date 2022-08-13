#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int arr[5][5],i,k,v;

    for(int i=0;i<5; i++){
    for(int k=0;k<5;k++){

        cin >>arr[i][k];
        if(arr[i][k]==1){
        v=abs(3-(i+1))+abs(3-(k+1));

        }
    }
    }
    cout <<v;


    return 0;
}
