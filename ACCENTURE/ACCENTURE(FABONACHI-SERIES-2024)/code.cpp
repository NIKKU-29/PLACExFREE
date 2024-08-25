//RECURSIVE TLE FOR LARGER NUMBER  -->S

// #include<bits/stdc++.h>
// using namespace std;

//     long long fab(long long n)
//     {
//         if(n==1) return 0;
//         if(n==2) return 1;

//         return fab(n-1) + fab(n-2);
//     }

// long long main()
// {
//     long long long n=0;
//     cout<<"ENTER THE ELEMENT NUMBER  -->";
//     cin>>n;

//     cout<<fab(n);

//     return 0;
// }


//using dp


// #include<bits/stdc++.h>
// using namespace std;

//     long long fab(long long n)
//     {
//         if(n==1) return 0;
//         if(n==2) return 1;

//         long long dp[n+1];

//         dp[1]=0;
//         dp[2]=1;


//         for(long long i=3;i<=n;i++)
//         {
//             dp[i]=dp[i-1] + dp[i-2];
//         }

//         return dp[n];
//     }

// int main()
// {
//     long long n=0;
//     cout<<"ENTER THE ELEMENT NUMBER  -->";
//     cin>>n;

//     cout<<fab(n);

//     return 0;
// }

// space optimization

#include<bits/stdc++.h>
using namespace std;

    long long fab(long long n)
    {

        if(n==1) return 0;
        if(n==2) return 1;

        long long prev1=1;
        long long prev2=0;
        long long curr=0;


        for(long long i=3;i<=n;i++)
        {
            curr=prev1 + prev2;
            prev2=prev1;
            prev1=curr;
        }

        return prev1;
    }

int main()
{
    long long n=0;
    cout<<"ENTER THE ELEMENT NUMBER";
    cin>>n;

    cout<<fab(n);

    return 0;
}

