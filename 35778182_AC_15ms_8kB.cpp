#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main () {
    int n,m, maximum = -1, index = -1;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(ceil((double)x / m) >= maximum)
        {
            maximum = ceil((double)x / m);
            index = i;
        }
    }
    cout << index;
}
 