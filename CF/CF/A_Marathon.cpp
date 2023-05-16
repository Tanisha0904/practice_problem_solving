#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d, q = 0;
        cin>>a>>b>>c>>d;
        if(a<b){
            q++;
        }
        
        if(a<c){
            q++;
        }
        
        if(a<d){
            q++;
        }
        cout<<q<<"\n";

    }
    return 0;
}