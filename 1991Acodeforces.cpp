#include <bits/stdc++.h>
using namespace std;
// const int MAX_N = 105;
// int t, n, a[MAX_N];
int main()
{
	const int MAX_N = 105;
	int t, n, a[MAX_N];
	 cin >> t;
	
	while (t--)
	{
		cin >>n;
		for (int i=1; i<=n;i++)
		 cin >>a[i];
		int max_value=0;
		for (int j=1;j<=n;j+=2) 
			max_value=max(max_value,a[j]);
		
		cout<<max_value<<'\n';
	

	}
}