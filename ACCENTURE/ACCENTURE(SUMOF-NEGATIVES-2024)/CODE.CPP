#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b,c,d;
    cout<<"ENTER 4 NUMBERS";
    cin>>a>>b>>c>>d;
    int sum=0;

    if(a<0) sum+=a;
    if(b<0) sum+=b;
    if(c<0) sum+=c;
    if(d<0) sum+=d;

    cout<<"SUM OF NEGATIVES IS :  "<<sum;

    return 0;
}