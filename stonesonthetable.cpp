#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int t;
	cin >>t;
	string s;
	cin >>s;
	int pair=0;
	int i=1;
	while (i<t){
		if (s[i]==s[i-1]){
			pair++;
			i++;
		}
		else i++;
	}
	cout <<pair<<endl;
	return 0;
}