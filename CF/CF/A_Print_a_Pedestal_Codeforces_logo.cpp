//A_Print_a_Pedestal_Codeforces_logo
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll h1, h2, h3;
        h1 = round(n/3);
        h2 = round(n/3);
        h3 = round(n/3);
        cout<<h2<<" "<<h1<<" "<<h3<<"\n";
        if(n%3==0){

            h1+=1;
            h3-=1;
            // h2+=1;
            // h3-=1;
        }
        else if(n%3==2){
            h1+=2;
            h2 +=1;
            h3-=1;
        }
        else if(n%3==1){
            h1+=2;
            h3-=1;
            // h2+=1;
            // h3-=2;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<"\n";
    }
    return 0;
}
