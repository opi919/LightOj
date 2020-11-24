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
    long long int i,j,k,l,n,m,t,s,max;
    long long int a[100];

    a[0]=1;
    for(i=1; i<=20; i++)
    {
        j=i;
        a[i]=a[i-1]*j;
    }
   /* for(i=0;i<=20;i++)
         printf("%lld\n",a[i]);*/
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        m=n;
        max=0;
         long long int b[100]={0};
        if(n==1)
        {

            printf("Case %lld: 0!\n",i);
        }
        else if(n==2)
        {

            printf("Case %lld: 0!+1!\n",i);
        }
        else if(n==3)
        {

            printf("Case %lld: 0!+2!\n",i);
        }
        else if(n==4)
        {

            printf("Case %lld: 0!+1!+2!\n",i);
        }
        else if(n==5)
        {

            printf("Case %lld: impossible\n",i);
        }
        else
        {
            for(j=20;j>=0;j--)
            {
                if(m>=a[j])
                {
                    if(j>=max) max=j;
                    b[j]=1;
                    m=m-a[j];
                   // printf("%lld %lld %lld\n",m,b[j],j);
                }
                if(m==0) break;
            }
            if(m==0)
            {
                printf("Case %lld: ",i);
                for(j=0;j<=max;j++)
                {
                    //if(b[j]>0) printf("%lld!\n",j);
                   if(j==max) printf("%lld!\n",j);
                       else if(b[j]>0) printf("%lld!+",j);
                }
            }
            else printf("Case %lld: impossible\n",i);

        }
    }
    return 0;
}
