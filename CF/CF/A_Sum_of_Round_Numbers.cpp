#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
int main(){
    ll t;
    cin>>t;
    while(t---){
        ll n;
        cin>>n;
        vector<ll> v;
        ll c=0;
        string s = (string)n;
        for(ll i=1;i<s.size();i++){
            if(n%(10*i)!=0){
                v.push_back(n%(10*i));
                c++;
            }

        }
        cout<<v.size()<<"\n";
        for(ll i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }

    }
    return 0;
}       