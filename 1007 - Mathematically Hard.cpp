#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
//#include<stack>
//#include<deque>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
#define MAX 5000010
unsigned long long int phi[MAX];
using namespace std;
int main()
{
   int i,j,k,l,n,m,s,t,p,a,b;

   for(i=1;i<MAX;i++) phi[i]=i;
   for(j=2;j<MAX;j++)
   {
       if(phi[j]==j)
       {
           for(k=j;k<MAX;k+=j) phi[k]-=phi[k]/j;
       }
   }
//   for(i=1;i<=20;i++) cout<<phi[i]<<" ";
//   cout<<endl;
   for(i=2;i<MAX;i++)
   {
       phi[i]=(phi[i]*phi[i])+phi[i-1];
   }
//    for(i=1;i<=20;i++) cout<<phi[i]<<" ";
//   cout<<endl;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>a>>b;
    printf("Case %d: %llu\n",i,phi[b]-phi[a-1]);
}
    return 0;
}
