// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"

// int countDigit(int n)
// {
//       // Base case
//     if (n == 0)
//         return 1;
  
//     int count = 0;
//     while (n != 0) {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }
// int main()
// {
// 	int t;
// 	cin >>t;
// 	while (t--)
// 	{
// 		int elem;
// 		int last_digit=0;
// 		int reamining_int =0;
// 		cin >>elem;
// 		int total_digit= countDigit(elem);
// 		if (total_digit==1) cout<<"NO"<<endl;
// 		else if (total_digit==2){
// 			if (elem==10) cout<<"YES"<<endl;
// 			else cout<<"NO"	<<endl;	}
		
// 		else if (total_digit==3){
// 			last_digit=elem%10;
// 			reamining_int=elem/10;
// 			if (2<=last_digit && reamining_int==10) cout<<"YES"<<endl;
// 			else cout<<"NO"<<endl;	}
// 		else if (total_digit==4){
// 			last_digit=elem%100;
// 			reamining_int=elem/100;
// 			if (9<last_digit && reamining_int==10) cout<<"YES"<<endl;
// 			else cout<<"NO"<<endl;	}
// 		else if (total_digit==5){
// 			if (elem==10000) cout<<"YES"<<endl;
// 			else cout<<"NO"<<endl;
// 					}
			
			
// 	}
// }
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
	int t; cin >>t;
	while (t--)
	{
		int a;
		cin >>a;
		if (a<=101||a>=110 && a<=1009||a>1099) cout<<"No"<<endl;
		else cout<<"YES"<<endl;
	}
}