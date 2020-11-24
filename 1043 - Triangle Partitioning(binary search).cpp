#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstring>
#define X 10000000
#define ss stringstream
#define ll long long int
#define pi acos(-1)
//#include<sstream>
using namespace std;
int main()
{
    int i,j,k,l,T,t;
    double ab,ac,bc,s1,s2,ad,de,bd,ce,ae,ratio,low,high,h,ade,bdec,abc,rat,mid;
    cin>>T;
    for(i=1; i<=T; i++)
    {

        cin>>ab>>ac>>bc>>ratio;
 t=100;
       low=0;
       high =ab;
        while(t--)
        {
            mid=((low+high)/2);
            ad=mid;

            ae = (ad*ac)/ab;
    de = (ad*bc)/ab;
s1 = (ab+ac+bc)/2.0;
    s2 = (ad+ae+de)/2.0;

  abc = sqrt(s1 * (s1-ab) * (s1-ac) * (s1-bc));
    ade = sqrt(s2 * (s2-ad) * (s2-ae) * (s2-de));

    bdec=abc-ade;

    rat=ade/bdec;

    if(rat*1.000000000>ratio*1.000000000)
        high=mid;
    else low=mid;
        }
printf("Case %d: %.10lf\n",i,ad);
//cout<<"ad = "<<ad<<endl;
    }
    return 0;
}

