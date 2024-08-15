#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int  a,b;
		cin>>a>>b;
		string g;
		cin>>g;
		string v;
		cin>> v;
		bool f=false;
		for (int i=0;i<=5;i++)
		{
			if (g.find(v) != string ::npos){//Here ,I have used the Find function of c++
				//From the STL library of C++ to find the first occurences of the 
				//Substring
				cout<<i<<endl;
				f = true;
				break;
			}
			g.append(g);
		}


		if (f !=true) cout<<-1<<endl;

	}
}
