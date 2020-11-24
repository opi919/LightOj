#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,q,n,m,t,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>n;
       int l[n],w[n],h[n],v[n],v2[n];
       char str[n][100];
      for(j=0;j<n;j++)
      {
          scanf("%s%d%d%d",&str[j],&l[j],&w[j],&h[j]);
          v[j]=l[j]*w[j]*h[j];
          v2[j]=v[j];
      }
      sort(v2,v2+n);
      if(v2[n-1]!=v2[n-2])
      {
          k=v2[n-1];
          q=v2[0];
          for(j=0;j<n;j++)
      {
          if(v[j]==q) x=j;
          if(v[j]==k) y=j;
      }
      printf("Case %d: %s took chocolate from %s\n",i,str[y],str[x]);
      }
      else
      {
        printf("Case %d: no thief\n",i);
      }
    }
    return 0;
}
