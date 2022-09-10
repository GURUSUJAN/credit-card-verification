#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int main()
{
    int ar[16];
    int i=0;
    for(i=1;i<17;i++)
    {
        cin>>ar[i];
    }
    int m,sum=0,sum_one=0;
    for(i=1;i<17;i++)
    {
        if(i%2!=0)
        {
            ar[i]*=2;
            while(ar[i]>9)
            {
                m=ar[i]%10;
                sum=sum+m;
                ar[i]=ar[i]/10;
            }
            sum_one+=ar[i];
        }
    }
    int total=0;
    total=sum+sum_one;
    if(total%10==0)
    {
        cout<<"Card is Valid"<<endl;
    }
    else
    {
        cout<<"\a";
        cout<<"Card is Invalid"<<endl;
    }
}
