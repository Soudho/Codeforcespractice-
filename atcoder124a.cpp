#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
	int t=2; 
	int A,B;
	int sum=0;
	while (t--)
	{
		cin >>A>>B;
		if (A>B) {sum+=A;A-=1;}
		else {sum+=B; B-=1;}

	}
	cout<<sum<<endl;return 0;
}