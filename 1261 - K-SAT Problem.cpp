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
    int i,t,j,k1,l,n,m,k,s,f,p,x;
    map<int,int>mp;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> m >> k1;
        int a[n+10][k1+10];
        mp.clear();
        for(j=0; j<n; j++)
        {
            for(k=0; k<k1; k++)
            {
                cin>> a[j][k];
            }
        }
        cin>>p;
        for(j=0; j<p; j++)
        {
            cin>> x;
            mp[x]=1;
        }
        l=0;f=1;
        for(j=0; j<n; j++)
        {
            l=0;
            for(k=0; k<k1; k++)
            {
                if(a[j][k]>0 && mp[a[j][k]]==1)
                    l=1;
                if(a[j][k]<0)
                {
                    s=-a[j][k];
                    if(mp[s]==0)
                        l=1;
                }
            }
            if(l==0) f=0;
        }
        if(f==1)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
