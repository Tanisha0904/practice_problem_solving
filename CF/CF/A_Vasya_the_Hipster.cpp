#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a, b;
    cin>>a>>b;

    cout<<min(a, b)<<" "<<abs(a-b)/2;

    return 0;
}