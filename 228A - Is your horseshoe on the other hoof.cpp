#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
set<long long> s;

long long a,b,c,d;
cin>>a>>b>>c>>d;
s.insert(a);
s.insert(b);
s.insert(c);
s.insert(d);
cout<<4-s.size();
    return 0;
}
