#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll m(){
    ll n, c=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(ll i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                c++;
            }
        }
        if(c%2!=0){
            return (n-(c+1));
        }
        else{
            return (n-c);
        }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<m()<<"\n";

    }
    return 0;
}