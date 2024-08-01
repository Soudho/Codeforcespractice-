// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int K, S;
// 	int count =0;
// 	cin >> K>> S ;
// 	for (int i=0;i<=K;i++ )
// 		for (int j=0; j<=K;j++)
// 		{
// 			for (int h =0; h<=K;h++)
// 			{
// 				if (i+j+h==S) count+=1;

// 			}
// 		}
// 		cout<<count<<"\n";
// 		return 0;
//}
//>>>//>>
//this is the brute force solution of the problem
// in the worst case scenario the K will be 2500 , so the time will be needed
// 2500*2500*2500=15625000000 times ; this is greater that 10^8 times .So , i will get an TLE easily

#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int K , S ;
	int count=0;
	cin >> K  >> S;
	for (int i=0; i<=K; i++)
	{
		for (int j =0; j<=K; j++)
		{
			int z = S- i-j;
			if (z>=0 && z<=K) count+=1;
		}
	}
	cout << count<<"\n";
	return 0;
}