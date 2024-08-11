#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define endl "\n"
int main()
{
   int t;
   cin>>t;
    //int curr=0;int last=0;
   while (t--)
   { int curr=0;int last=0;
    int n,x;
    cin>>n>>x;
    int arr1[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for (int i=0;i<n;i++)
    {
        //int curr=0;int last=0;
        curr = max(curr,arr1[i]-last);
        last=arr1[i];

    }
    curr=max(curr,2*(x-last));
    cout<<curr<<endl;
   }
   //cout<<curr<<endl;
   return 0;
}
