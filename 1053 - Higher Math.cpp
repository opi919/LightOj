#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,t,n,l,a[3];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        j=a[2]*a[2];
        n=a[0]*a[0];
        l=a[1]*a[1];
        if(j==(n+l))
        {
            printf("Case %lld: yes\n",i);
        }
        else printf("Case %lld: no\n",i);
    }
return 0;
}
