#include<bits/stdc++.h>
#define ll long long int
std::initializer_list<long long int>
using namespace std;
string a(){
        ll n;
        cin>>n;
        ll a[n], b[n], c[n], d = 0, m = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        for(ll i=0;i<n;i++){
            c[i] = a[i]-b[i];
            if(c[i]>d){
                d = c[i];
            }
            if(c[i]<m){
                m = c[i];
            }
        }
        for(ll i=0;i<n;i++){
            // d = a[i]-b[i];
            if(a[i]<b[i]){
                return "NO\n";
            }
            ll k =  max((a[i]-d),0);
           if(k !=b[i] ) return "NO\n";  
        }
        return "YES\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<a();
    }
    return 0;
}