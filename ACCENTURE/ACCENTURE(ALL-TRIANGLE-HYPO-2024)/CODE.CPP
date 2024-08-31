#include <bits/stdc++.h>
using namespace std;

int solve(int L, int B)
{
    return ceil(sqrt((L*L) + (B*B)));
}

int main() {
    int i;
    cout<<"ENTER THE SIZE  ";
    cin>>i;
    
    while(i--)
    {   
        int a,b;
        cout<<endl;
        cout<<"ENTER THE VALUE OF A and B  ";
        cin>>a>>b;
        cout<<endl;
        cout<<solve(a,b);
    }

    return 0;
}