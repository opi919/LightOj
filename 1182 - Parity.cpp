#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        j=0;
        cin>>n;
        while(1)
        {
            k=n%2;
            if(k==1) j++;
            n=n/2;
            if(n==0) break;
        }
        if(j%2==0) printf("Case %lld: even\n",i);
        else printf("Case %lld: odd\n",i);
    }
    return 0;
}
