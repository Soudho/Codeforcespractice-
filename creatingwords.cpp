#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ; cin >>n;
	for (int i=0; i<n;i++)
	{
		string s,d;cin>>s>>d;
		swap(s[0],d[0]);
		cout<<s <<" "<< d <<"\n";

	}
	return 0;
}