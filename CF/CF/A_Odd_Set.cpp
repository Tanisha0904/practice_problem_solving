#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, o = 0, e = 0;
        cin>>n;
        ll a[2*n];
        for(ll i = 0; i<2*n; i++){
            cin>>a[i];
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        o==e ? cout<<"Yes\n" : cout<<"No\n";
    }
    return 0;
}