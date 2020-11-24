#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
//#include<stack>
//#include<deque>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
#define MAX 1000010

using namespace std;
int main()
{
   int i,j,k,l,n,m,a[10],b,c,e,f,d,t,x,y,z,p,q,r;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n;a[0]=a[1]=a[2]=1;
       a[3]=a[4]=a[5]=1000;
       for(k=0;k<n;k++){
       for(j=0;j<3;j++)
       {
           cin>>m;
           if(m>a[j]) a[j]=m;
       }
       for(j=0;j<3;j++)
       {
           cin>>m;
           if(m<a[j+3]) a[j+3]=m;
       }
       }
       if(a[3]>a[0] && a[4]>a[1] && a[5]>a[2])
       {
           x=((a[3]-a[0])*(a[4]-a[1])*(a[5]-a[2]));
           printf("Case %d: %d\n",i,x);
       }
       else printf("Case %d: 0\n",i);
   }
    return 0;
}
