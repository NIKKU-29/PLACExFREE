// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long i = 0;
//     cout<<"ENTER THE NUMBER TO CONVERT TO BINARY";
//     cin >> i;

//     string ans;
//     if(i==0)
//     {
//         cout<<"0";
//     }
//     else{

//     while(i>0)
//     {
//         ans= to_string(i % 2) + ans;
//         i/=2;
//     }
    
//     }

//     cout<<ans;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long i = 0;
    cout<<"ENTER THE NUMBER TO CONVERT TO BINARY";
    cin >> i;

    string ans;

    while(i)
    {

    if(i&1)
    {
        ans= '1' + ans;
    }
    else{
         ans= '0' + ans;
    }

        i>>=1;

    }
    

    cout<<ans;

    return 0;
}