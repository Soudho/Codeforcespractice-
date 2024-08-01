#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;cin >> x ;
if (x<10){
         cout<<"000"<<x<<"\n";

}
else if (x<=99){
         cout<<"00"<<x<<"\n";
}
else if (x<=999){
         cout<<"0"<<x<<"\n";
}
else {
         cout<<x<<"\n";
}


return 0;
}
