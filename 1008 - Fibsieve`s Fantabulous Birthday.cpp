#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long  int i,j,k,t;
    long long int s,n,m,l,r,c,y;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>s;
        if(s==1)
            printf("Case %lld: 1 1\n",i);
        else
        {
            n=sqrt(s);
            if((n*n)==s)
                m=n*n;
            else
            {
                n++;
                m=n*n;
            }
            if(n%2==0)
            {
                l=m-s;
                if(l>(n-1))
                {
                    y=m-(n-1)-s;
                    r=n-y;
                    c=n;
                    printf("Case %lld: %lld %lld\n",i,r,c);
                }
                else
                {
                    r=n;
                    c=l+1;
                    printf("Case %lld: %lld %lld\n",i,r,c);
                }
            }
            else
            {
                l=m-s;
                if(l<=(n-1))
                {
                    r=l+1;
                    c=n;
                    printf("Case %lld: %lld %lld\n",i,r,c);
                }
                else
                {
                    r=n;
                    y=(m-(n-1))-s;
                    c=n-y;
                    printf("Case %lld: %lld %lld\n",i,r,c);
                }
            }
        }
    }
    return 0;
}
