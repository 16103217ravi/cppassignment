#include<bits/stdc++.h>
using namespace std;
int Length(int x)
{
    int count=0;
    while(x)
    {
        count++;
        x=x/10;
    }
    return count;
}
int fast_pow(int x, int exp)
{
    if(exp==0)
    {
        return 1;
    }
    if(exp==1)
    {
        return x;
    }
    if(exp%2==0)
    {
        return fast_pow(x*x, exp/2);
    }
    else
    {
        return x * fast_pow(x*x, exp/2);
    }
}
int main()
{
    while(1)
    {
        int x;
        cout<<"Enter a number: ";
        cin>>x;
        int n = Length(x)-1;
        int ans = 0;
        while(x)
        {
            int a = x%10;
            ans = ans + a*fast_pow(10,n);
            n--;
            x=x/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
