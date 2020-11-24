#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m>>n;
        if(m==1 || n==1)
        {
            if(m>n)
            {
                printf("Case %d: %d\n",i,m);
            }
            else printf("Case %d: %d\n",i,n);
        }
        else if(m==2 && n==2) printf("Case %d: %d\n",i,n*m);
          else if(m==2)
            {
                if(n%2==0)
                {
                  n=n/2;
                  if(n%2==0) printf("Case %d: %d\n",i,n*2);
                  else {
                    n++;
                    printf("Case %d: %d\n",i,n*2);
                  }
                }
                else
                {
                   n=(n/2)+1;
                   printf("Case %d: %d\n",i,n*2);
                }
            }

            else if(n==2)
            {
                if(m%2==0)
                {
                    m=m/2;
                    if(m%2==0) printf("Case %d: %d\n",i,m*2);
                else
                {
                    m++;
                    printf("Case %d: %d\n",i,m*2);
                }
            }
            else{
                m=(m/2)+1;
                printf("Case %d: %d\n",i,m*2);
            }

            }
        else
        {
            k=n*m;
            if(k%2==0) printf("Case %d: %d\n",i,k/2);
            else
            {
                k=(k/2)+1;
                printf("Case %d: %d\n",i,k);
            }
        }
    }
    return 0;
}
