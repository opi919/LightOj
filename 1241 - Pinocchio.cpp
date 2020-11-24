#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        l=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        s=2;
        for(j=0;j<n;j++)
        {
            k=a[j]-s;
                    if(k<=5 && k>0)
                    l++;
                    else if(k>5)
                    {
                        l+=k/5;
                        if(k%5!=0)
                        l++;
                    }
                    s=a[j];
        }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
