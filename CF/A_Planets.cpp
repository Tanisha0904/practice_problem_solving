#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define printVec(v) for(auto val:v)cout<<val<<" ";cout<<endl
#define auto(val,v) for(auto val:v)
using namespace std;
ll tan(){

    ll n,c;
    cin>>n>>c;
    ll a[n];
    ll cost=0;
    map<int, int> mp;
    rep(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    // sort(a,a+n);
    auto(i,mp){
        // cout<<i.second<<" ";
        if(c==1){
            cost+=1;
        }
        else if(i.second>c){
            cost+=c;
        }
        else {
            cost+=i.second;
        }
        // cout<<cost<<" ";
    }
    return cost;

    
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
}
    return 0;
}