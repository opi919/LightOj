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
    int i,j,t,k,l,n,m,s,x,y,temp;
   char ch;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n>>m;
    int a[n+10],b[n+10];
       for(j=0;j<n;j++)
       {
           scanf(" %d",&a[j]);
           b[j]=a[j];
       }
       for(j=0;j<m;j++)
       {
           cin>>ch;
           if(ch=='S')
           {
               cin>>x;
               for(k=0;k<n;k++)
               {
                a[k]=a[k]+x;
                b[k]=a[k];
               }
           }
           else if(ch=='M')
           {
               cin>>x;
               for(k=0;k<n;k++)
               {
                a[k]=a[k]*x;
                b[k]=a[k];
               }
           }
           else if(ch=='D')
           {
               cin>>x;
                for(k=0;k<n;k++)
               {
                a[k]=a[k]/x;
                b[k]=a[k];
               }
           }
           else if(ch=='R')
           {
                for(k=0,l=n-1;k<n,l>=0;k++,l--)
               {
                a[k]=b[l];
               }
               for(k=0;k<n;k++)
                b[k]=a[k];
           }
           else if(ch=='P')
           {
               cin>>x>>y;
               temp=a[x];
               a[x]=a[y];
               a[y]=temp;
               b[x]=a[x];
               b[y]=a[y];
           }
       }
       printf("Case %d:\n",i);
       for(k=0;k<n;k++)
       {
           if(k==n-1) printf("%d",a[k]);
           else printf("%d ",a[k]);
       }
       printf("\n");
   }
    return 0;
}
