#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,t,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n==0) printf("0 0\n");
        else {
        k=n/2;
        printf("%d %d\n",k,n-k);
        }
    }
    return 0;
}
