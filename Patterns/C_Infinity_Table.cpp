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
void tan(){

    ll k;
    cin>>k;
    ll i, j;
    ll n = ceil(sqrt(k));
    if(k-n>(n-1)*(n-1)){
        i=n;
    }
    else{
        i = k-(n-1)*(n-1);
    }
    
    if(k-n>(n-1)*(n-1)){
        j= n*n -k +1;
    }
    else{
        // j = k-(n-1)*(n-1);
        j = n;
    }

cout<<i<<" "<<j;
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    cout<<endl;
}
    return 0;
}

        // j = k-(n-1)*(n-1);
