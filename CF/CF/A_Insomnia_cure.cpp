#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll q(){
     ll  a[4], d;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>d;

    sort(a, a+4);

    // if(a[0]==1){
    //     return d;
    // }
    // else{
        // ll b = a[0]*a[1]*a[2]*a[3];
        ll c = 0;
        for(ll i = 1;i<=d;i++){
            if(i%a[0]==0 || i%a[1]==0 ||i%a[2]==0 ||i%a[3]==0){
                c++;
            }
        }
        return c;

    // }
}
int main(){
   cout<<q()<<"\n";

    return 0;
}