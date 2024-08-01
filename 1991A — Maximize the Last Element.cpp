#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ; cin >> n;
	int max_value=0;
	while (n--)
	{
		int len;cin >>len;
		for (int i=0; i<len;i++)
		{
			int b;cin>>b;
			if (i%2!=0)
			{
				max_value =max(max_value,b) ;
			}

		}
		cout<<max_value;
	}
	return 0;
}