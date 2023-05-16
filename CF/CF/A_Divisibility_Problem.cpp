// A_Divisibility_Problem
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        ll c = (a/b);
        if(a%b==0){
            cout<<0<<"\n";
        }
        else
            cout<<abs(( c+1)*b - a)<<"\n";

//         if(a>b){
//             ll c = (a/b + 1)*a - a;
//             cout<<c<<"\n";
//         }
//         else{
// cout<<"\n";
//         }

    }
    return 0;
}