#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
//#include<stack>
//#include<deque>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
using namespace std;
int main()
{
    int i,j,t,k,l,n,m,a,b,c,d,e,f,s;
    int arr[10010];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        arr[0]=a%10000007;
        arr[1]=b%10000007;
        arr[2]=c%10000007;
        arr[3]=d%10000007;
        arr[4]=e%10000007;
        arr[5]=f%10000007;
        s=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5];
        arr[6]=s%10000007;
        s=s-arr[0];
        if(n==6)
            printf("Case %d: %d\n",i,s%10000007);
        else
        {
            for(j=7; j<=n; j++)
            {
                    s=s+arr[j-1];
                    arr[j]=s%10000007;
                    s=s-arr[j-6];
            }
            printf("Case %d: %d\n",i,arr[n]);
        }
    }
    return 0;
}
