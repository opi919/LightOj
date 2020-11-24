#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,t,n,p,q,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        s=0;
        l=0;
        cin>>n>>p>>q;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(j=0;j<n;j++)
        {

           s+=a[j];
           if(l==p) break;
           if(s>q)
           {
               s=s-a[j];
               break;
           }
           l++;
        }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
