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

    ll n;cin>>n;
    ll a[n];
    rep(i,0,n){
        cin>>a[i];

    }
    ll q;cin>>q;
std::vector<std::pair<int, int>> pp;
    vector<vi> v;

    rep(i,0,q){
        ll p[2];
        cin>>p[0]<<p[1];

    v.pb(p);
    }
    int m=0;
    while(m<q){
        re(i,n-1,0){
            if(a[i]%v[m][0]==0){
                swap()
            }
        }
    }
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