#include<bits/stdc++.h>
using namespace std;

//magical stats

int main()
{
    int n;
    cout<<"ENTER THE LIMIT  ";
    cin>>n;
    int ans=0;

    for(int i=0;i<=n;i++)
    {
        int j=i;
        int count=0;

        while(j>0)
        {
            if(j & 1)
            {
                count+=2;
            }

            else count+=1;

            j=j>>1;
        }

        ans+=count;
    }

        cout<<ans;

    return 0;
}
    
