#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    long long int i,j,w,t,n,l,m=0,s;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&w);
        m=0;

            for(j=2; j<=w/2; j*=2)
            {
                if(w%j==0)
                {
                    l=w/j;
                    if(j%2==0 && l%2!=0)
                    {
                        printf("Case %lld: %lld %lld\n",i,l,j);
                        m=1;
                        break;
                    }
                }
            }
            if(m==0)
                printf("Case %lld: Impossible\n",i);
        }
    return 0;

}
