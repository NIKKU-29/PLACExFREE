#include<bits/stdc++.h>
using namespace std;

bool prime(int i)
{
    if(i<=1) return false;
    if(i==2) return true; //
    if(i%2==0) return false; //skips odd

    else{
            for(int j=3;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    return false;
                }
            }
    }

    return true;
}

int main()
{   
    int n=0;
    cout<<"ENTER THE SIZE OF THE ARRAY";
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER THE "<< i+1 <<"st VALUE ";
        cin>>arr[i];
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(prime(i))
        {
            ans+=arr[i];
        }
    }

    cout<<ans;

    return 0;
}