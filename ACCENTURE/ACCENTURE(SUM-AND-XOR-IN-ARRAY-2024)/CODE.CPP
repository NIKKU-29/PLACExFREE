#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout<<"enter the size of the array";
    cin >> size;
    vector<int>vec(size);

    if(size==0) return 0;
    if(size==1) return vec[0];


    for(int j=0;j<size;j++)
    {
        cin>>vec[j];
    }

    int XoR=vec[1];
    int sum=vec[0];

    for(int i=2;i<size;i++)
    {
        if(i%2==1) XoR^=vec[i];
        else sum+=vec[i];
    }

    cout<<XoR+sum;


    return 0;
}