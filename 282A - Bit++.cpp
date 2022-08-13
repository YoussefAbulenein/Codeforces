#include <iostream>

using namespace std;

int main()
{
    int i, n,b=0;
    string v;
    cin >>n;

    for(i=0;i<n;i++){

        cin>>v;

        if(v=="X++"){

            b++;
        }
        else if (v=="++X"){
        ++b;
        }
    else if(v=="X--"){
        b--;

    }
    else
    {
        --b;

    }}

    cout <<b;
    return 0;
}
