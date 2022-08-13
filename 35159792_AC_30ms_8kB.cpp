#include <iostream>

using namespace std;

int main()
{
        int n,flag=0,a;

        cin >> n>>a;
        int num[n];
        for (int i=0;i<n;i++){


            cin >>num[i];



        }

        for (int i=0;i<n;i++){
            if(num[a-1]<=num[i]&&num[i]>0){



                flag++;

            }





        }
        cout<<flag;

        return 0;
}