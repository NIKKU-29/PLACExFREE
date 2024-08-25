#include <bits/stdc++.h>
using namespace std;

//if there is

int main() {

    // input is not asked
    string s;
    char X1;
    char X2;
    cout<<"ENTER THE STRING :";
    getline(cin,s);
    cout<<"ENTER THE CHARACTER YOU WANT TO SWAP :";
    cin>>X1;
    cout<<"ENTER THE CHARACTER TO SWAP INTO :";
    cin>>X2;
    cout<<"SWAPPING "<<X1<<" TO "<<X2<<" IN " << s <<" ans vise versa"<<"----->";
    string ans;
    
    //code starts from here
    //   ||
    //   || 
    //   ||
    //   \/ 

    for(auto& elem : s)
    {
        if(elem == X1)
        {
            elem=X2;
        }
        else if( elem == X2 )
        {
                elem=X1;
        }
    }


    cout<<s;

    return 0;
}