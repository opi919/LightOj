#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<stack>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
using namespace std;
int main()
{
    int t,i,j,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
            string ch,temp,str3;
    stack<string>str;
    stack<string>str2;
        str3="http://www.lightoj.com/";
        str.push(str3);
        while(cin>>ch)
        {
            if(ch=="QUIT")
            {
                break;
            }
            if(ch=="VISIT")
            {
                cin>>str3;
                cout<<str3<<endl;
                str.push(str3);
                if(!str2.empty())
                {
                    while(!str2.empty())
                        str2.pop();
                }
            }
           else if(ch=="BACK")
           {
               temp=str.top();
               str.pop();
               str2.push(temp);
               if(!str.empty())
                cout<<str.top()<<endl;
               else{
                cout<<"Ignored"<<endl;
                temp=str2.top();
                str.push(temp);
                str2.pop();
               }
           }
           else if(ch=="FORWARD")
           {
               if(!str2.empty())
               {
                   cout<<str2.top()<<endl;
                   temp=str2.top();
                   str.push(temp);
                   str2.pop();
               }
               else {cout<<"Ignored"<<endl;}
           }
        }
    }
    return 0;
}
