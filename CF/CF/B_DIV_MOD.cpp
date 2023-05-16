// B_DIV_MOD.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int l,r,a,maxi;
        cin>>l>>r>>a;
        for(long long int i=l;i<=r;i++){
            long long int x = round(i/a) + i%a;
            maxi = max(maxi, x);
        }
        cout<<maxi<<"\n";
    }

return 0;
}