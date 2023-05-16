#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll M(){
    string s;
    cin>>s;
    ll x, c = 0;
    cin>>x;
    ll hour = int(s[0] + s[1]);
    ll hr = int(s[0] + s[1]);
    ll minute = int(s[3] + s[4]);
    ll min = int(s[3] + s[4]);
    ll h = x/60;
    ll m = x%60;
    for(ll i = 0;i<100;i++){
        // while(1){
        hr  = hr + h;
        min  =min +  m;
        ll p = (min/10)+ (min%10)*10;
        if(hr == p){
            c++;
        }
        if(hr == hour && min == minute ){
            return c;
        }
    }
    return c;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<M()<<"\n";
    }
    return 0;
}