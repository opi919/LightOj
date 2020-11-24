#include<iostream>
#include<bits/stdc++.h>
//#include<cmath>
//#define pi acos(-1)
using namespace std;
int main()
{
     long long int i,j,k,b,t;
    string str;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        k=0;
        cin>>str>>b;
        if(str[0]=='-') j=1;
        else j=0;
        if(b<0) b=b*-1;
        for(;j<str.size();j++)
        {
           k=k*10+(str[j]-'0') ;
           k=k%b;
        }
        if(k==0) printf("Case %lld: divisible\n",i);
        else printf("Case %lld: not divisible\n",i);
    }
    return 0;
}
