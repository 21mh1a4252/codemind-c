#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        if(i*i+1==n)
        {
            cout<<"NO";
            n=-1;
            break;
        }
    }
    if(n!=-1)
    {
        cout<<"YES";
    }
}