#include<iostream>
#include<cmath>
//#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,t;
    double ox,oy,ax,ay,bx,by,s,h,n,m,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        h=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        n=acos(((r*r)+(r*r)-(h*h))/(2*r*r));
        s=r*n;
        printf("Case %d: %lf\n",i,s);
    }
    return 0;
}
