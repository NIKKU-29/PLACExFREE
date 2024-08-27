#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1=0;
    int v1=0;
    int v2=0;
    int ans=0;

    cout<<"ENTER THE INITIAL HEIGHT";
    cin>>h1;
    cout<<"ENTER INITIAL VELOCITY";
    cin>>v1;
    cout<<"ENTER THE FINAL VELOCITY";
    cin>>v2;

    int elem=v1/v2;


    cout<< h1* (elem * elem);

    return 0;
    
}