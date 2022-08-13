#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++){

        if(x[i]<='4'||(x[i]=='9'&&i==0)){

                    cout<<x[i];


        }
        else
        {
                 cout<<'9'-x[i];


        }




    }
    return 0;
}
