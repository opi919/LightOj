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
    int i,j,k,l,m,n,t,s,r1,r2,c1,c2,sub1,sub2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>r1>>c1>>r2>>c2;
        l=0;
        if(r1>r2)
            sub1=r1-r2;
        else
            sub1=r2-r1;
        if(c1>c2)
            sub2=c1-c2;
        else
            sub2=c2-c1;
        if(sub1==sub2)
            printf("Case %d: 1\n",i);
        else
        {
            if(sub1%2==sub2%2) printf("Case %d: 2\n",i);
                else
                    printf("Case %d: impossible\n",i);
        }
    }
    return 0;
}
