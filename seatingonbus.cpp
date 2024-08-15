#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n][4];
    int j = 1;
    for (int i = 0; i < n; i++) 
    {
        if (j<= m) arr1[i][0] = j++;
        else arr1[i][0]=-1;
        if (j<= m) arr1[i][3] = j++;
        else arr1[i][3]=-1;
        
    }
    for (int i = 0; i < n; i++) 
    {
        if (j<= m) arr1[i][1]=j++;
        else arr1[i][1]=-1;
        if (j <= m) arr1[i][2]=j++;
        else arr1[i][2]=-1;
    }


    // for (int i=0; i<n;i++)
    // {
    //     for (int h=0;h<4;h++)
    //     {
    //         cout<<arr1[i][h]<<" ";
    //     }
    //     cout<<"\n";
    // }

    for (int i = 0; i < n; i++) 
    {   
        if (0 < arr1[i][1] && arr1[i][1] <= m) cout << arr1[i][1] << " ";
        if (0 < arr1[i][0] && arr1[i][0] <= m) cout << arr1[i][0] << " ";
        if (0 < arr1[i][2] && arr1[i][2] <= m) cout << arr1[i][2] << " ";
        if ((0 < arr1[i][3] && arr1[i][3] <= m) && i!=(n-1)) cout << arr1[i][3] << " ";
        else if ((0 < arr1[i][3] && arr1[i][3] <= m) && i==(n-1))cout << arr1[i][3];

       
    }
    
    

    return 0;
}
