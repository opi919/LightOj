#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    long long int t,i,j,k,a,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        a--;
        if(a<=1) k=0;
        else
        {
          k=a/3;
        k=k*2;
        if(a%3==2) k++;
        }
        j=b/3;
        j=j*2;
        if(b%3==2) j++;
        printf("Case %lld: %lld\n",i,j-k);
    }
    return 0;

}
