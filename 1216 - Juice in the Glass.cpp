#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define pi acos(-1)
using namespace std;
int main()
{
    int i,j,k,l,r1,r2,t,p,h;
    double r,v;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
       r=(r2+(((r1-r2)*p)/(double)h));
       v=(pi/3)*p*((r*r)+(r2*r2)+(r*r2));
       //printf("%lf\n",v);
       printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
