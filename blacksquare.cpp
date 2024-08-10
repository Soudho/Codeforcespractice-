#include <bits/stdc++.h>
using namespace std;
int main(){
	long long  a,b,c,d;
	char e;
	long long sum=0;
	cin >>a>>b>>c>>d;
	string s;
	cin >>s;
	for (int i=0; i<s.size();i++)
	{
		e =s[i];
		// cout<<e<<endl;
		if(e=='1') sum+=a;
		if (e=='2') sum+=b;
		if (e=='3') sum+=c;
		if (e=='4') sum+= d;
	}

	cout<<sum<<"\n";
	return 0;
}