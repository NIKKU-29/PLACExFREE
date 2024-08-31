#include <bits/stdc++.h>
using namespace std;

int index_find(int D,int Q,int R,vector<int>& vec)
{
    int div= (D * Q) + R;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==div)
        {
            return i;
        }
    }

    return -1;
}

int main()
 {
    int n;
    cout<<" ENTER THE SIZE OF THE ARRAY :";
    cin>> n;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY";
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int D,Q,R;
    cout<<"ENTER THE DIVISOR :";
    cin>>D;
    cout<<"ENTER THE QUOTIENT";
    cin>>Q;
    cout<<"ENTER THE REMAINDER";
    cin>>R;
    

    cout<<index_find(D,Q,R,vec);

    return 0;
}