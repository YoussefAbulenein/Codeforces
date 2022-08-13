#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int k=0;
    int arr[1000];
    getline(cin,s);
    for(int i=0;i<s.size();i++){

        if((s[i]>='0'||s[i]<='9')&&s[i]!='+'){
            arr[k]=s[i];

        k++;
        }



    }
    sort(arr,arr+k);
    for(int i=0;i<k;i++){
        char s=arr[i];
    if(i==k-1){

            cout<<s;}

            else{ cout<<s<<'+';

            }
    }



    return 0;
}

