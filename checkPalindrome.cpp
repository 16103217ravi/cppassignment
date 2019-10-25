#include<bits/stdc++.h>
#include<String>
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
        int n = Length(x);
        int exp = n-1, flag=0;
        while(x)
        {
            int last = x%10;
            int first = x/fast_pow(10, exp);
            if(last!=first)
            {
                flag=1;
                break;
            }
            x = (x % fast_pow(10, exp)) /10;
            exp= exp-2;
        }
        if(flag)
        {
            cout<<"Not a Palindrome."<<endl;
        }
        else
        {
            cout<<"Palindrome."<<endl;
        }
    }
    return 0;
}
