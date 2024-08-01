#include <bits/stdc++.h>
using namespace std ;
int isPrime(int N){
	if (N==2)return 1;
	for (int j =2;j<(sqrt(N)+1);j++)
	{
		if (N%j==0){
			return 1;
		}
		else return 0;
	}
}
int main(){
	int N;
	int count =0;
	cin >> N ;
	for (int i=2;i<N;i++)
	{
		if (N%i==0){
			count+=isPrime(i);
			
		}
	}
	cout<< count<< "\n";
	return 0;
}

