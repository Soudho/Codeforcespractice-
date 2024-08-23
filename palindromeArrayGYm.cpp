#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	int t; cin >>t;
	int arr[t];
	for (int i=0;i<t;i++)//T.C is O(n)
	{
		cin >>arr[i];

	}
	//int n ;
	int length=0;
	if (t%2==0) length = t/2;//O(1)
	else length = t/2+1;

	int l,r=0;
	bool flag = true;
	for (int i=0;i<length;i++)//O(n/2)
	{
		if (arr[i]==arr[t-1-i]) flag=true;//Total TC is = O(n)+o(n/2)+O(1)==O(n)
		else {flag=false;break;}
	}
	if (flag==true) puts("YES");
	else puts("NO");
	
	return 0;
}