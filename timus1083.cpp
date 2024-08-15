// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define endl "\n"

// int main(){
//     ll t; cin >>t;
//     string s; cin >>s;
//     ll len;
//     ll  sum=1;
//     ll h=0;
//     len = s.size();
//     //cout<<len<<endl;
//     while (t>0)

//     {
//         if (len>t){
//             cout<<0<<endl;
//         }
//         else if(len==t){

//         }
//         if ((t-h*len)>0)
//     {
//         sum*=(t-h*len);
    
//     }
//         else
//     { 
//             break;
//     }

//         h=1;
//         if (len>t) break;
//         t=t-h*len;
//         //if (len>t) break
//     }
//     cout<<sum<<endl;
// }
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>//have to include cstring to use strlen>>
using namespace std;

int main()
{
    int n, k, i, mod, ans;
    char marks[26];

    cin >> n >> marks;

    k = strlen(marks);

    mod = n % k;
    ans = 1;

    if(mod!=0)
        for(i = n; i >= mod; i -= k) 
            ans *= i;
    else
        for(i = n; i >= k; i -= k) 
            ans *= i;

    cout << ans << '\n';


    return 0;
}