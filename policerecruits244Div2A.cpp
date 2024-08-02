#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main(){
	int t ; cin >>t;
	int b;
	int reserved_police=0;
	int untreated_crime=0;
	while (t--)
		{
			cin>> b; 
			if (b==-1 && reserved_police ==0){
				untreated_crime+=1;

			}
			else reserved_police+=b;

		}
		cout<<untreated_crime<<endl;
		return 0;
}