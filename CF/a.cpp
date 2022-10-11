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
string tan(){

ll n;
cin>>n;

    ll e=0,o=0;
    ll i=2;
    while(i<=sqrt(n)){
        if(n%i==0){
            if(i%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        i++;
    }
    if(o<e){
        return "BUY";
    }
    if(o>e){
        return "SELL";
    }
    return "PASS";

}
int main(){
// ios::sync_with_stdio(false); cin.tie(0);
// tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
// }
    return 0;
}