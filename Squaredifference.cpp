// #include <bits/stdc++.h>
// using namespace std ;
// bool findprime (long long x)
// {
// 	// if (x<=1) return false;
// 	// else{
// 	// 	for (long long i=2;i<x;i++ )
// 	// 	{
// 	// 		if (x%i==0)
// 	// 		{
// 	// 			return false;

// 	// 		}

// 	// 	}
// 	// 	return true;
// 	// }
	
// }

// int main()
// {
// 	int t ; cin >> t;
// 	while (t--)
// 	{
// 		long long a ,b;
// 		cin >>a >> b;
// 		long long square = a*a-b*b;
// 		if (findprime(square)){
// 			cout<<"YES"<<"\n";
// 		}
// 		else{
// 			cout<<"NO"<<"\n";
// 		}
// 	}
// }
#include <bits/stdc++.h>
using namespace std;

bool Prime(long long x)
{
    for(long long i=2;i*i<=x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(Prime(a+b) && a-b==1)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
//Here , the logic behind the (a+b) and (a-b)==1 because we know that 
//a^2-b^2=(a+b)(a-b);if a+b is prime and a-b is 1 then we can 