#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n;int countr = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 1;i<n;i++) {

		if (s[i] == s[i - 1]) {

			countr++;

		}


	}

	cout << countr;

	return 0;
}