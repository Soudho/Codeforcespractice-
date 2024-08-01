#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b, c;cin >>a>>b>>c;
int f =0;
for (int i=a;i<=b;i++)
         {

         if( (i%c)==0){
         cout<<i<<"\n";
         f=f+1;
         return 0;
         }
         }
if (f==0);{
                  cout<<-1<<"\n";
}

return 0;
}


