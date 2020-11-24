#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,d1,d2,ax,ay,bx,by,cx,cy,dx,dy;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    /*if(cy>by)*/ d1=cy-by;
    //else d1=by-cy;
    /*if(ax>bx)*/ d2=ax-bx;
    //else d2=bx-ax;
    dy=ay+d1;
    dx=cx+d2;
    j=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
    j=j/2;
    if(j<0) j=j*-1;
    printf("Case %d: %d %d %d\n",i,dx,dy,j);
    }
    return 0;
}
