#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define pVec(v) for(auto e:v)cout<<e<<" ";cout<<"\n"
#define aut(e,v) for(auto e:v)
using namespace std;
string tan(){

    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n) cin>>a[i];
    vector<ll> v;
    sort(a, a+n);
    ll c=1;
    rep(i,0,n-1){
        if(a[i]==a[i+1]){
            c++;
        }
        else{

            v.push_back(c);
            c=1;
        }

    }
    if(*max_element(v.begin(), v.end()) > ceil(n/2)){
        return "NO";
    }
    return "YES";

}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    cout<<tan()<<endl;
}
    return 0;
}