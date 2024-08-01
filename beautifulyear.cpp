#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,p;
	cin >> a;
	while (1)
    {	a++;
		p = a%10;
		b = (a/10)%10;
		c = (a/100)%10;
		d = (a/1000)%10;
		// break;
        if (b != c && b != p && p != d && p != c && b != d && c != d)
        {
            break;
        }
    }
    cout << a << endl;
    return 0;
}
