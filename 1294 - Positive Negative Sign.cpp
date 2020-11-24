#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,n,m,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        j=n/2;
        k=j*m;
        printf("Case %lld: %lld\n",i,k);
    }
    return 0;
}
