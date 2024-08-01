#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n ;
	long long total_sum ;
	long long power_sum ;
	for (int i=0 ; i<n;i++)
	{
		int t ; cin >>t ;
		total_sum = (long long)t*(t+1)/2;
		power_sum =0;
		for (int j=1;j<=t;j=j*2)
		{
			power_sum+=j;
		}
		long long ans ; ans =total_sum -2* power_sum;
		cout<<ans <<"\n";
		total_sum=0;

		power_sum=0;

	}
	return 0;

}
