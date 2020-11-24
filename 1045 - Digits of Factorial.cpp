#include<iostream>
//#include<cmath>
//#include<cstring>
#include<bits/stdc++.h>
using namespace std;
    double loog[1000005];
int main()
{
loog[0]=0;
   long long int i,j,t,n,b,k;
    for(i=1;i<=1000000;i++)
        loog[i]=loog[i-1]+log(i);
    cin>>t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld", &n, &b);
        k=(loog[n]/log(b))+1;
      //  printf("%lf %lf %lf\n",loog[n],loog[b],log(b));
        printf("Case %lld: %lld\n",i,k);
    }
    return 0;
}
