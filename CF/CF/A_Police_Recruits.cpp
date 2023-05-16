#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n], sum = 0, c = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];        
    }
    ll k = 0;
    for(int i=0;i<n;i++){
        
        if(a[i] <0 && k<=0){
            c++;
            // k--;
        }
        else if(k >0 && a[i]<0){
            k--;
        }
        else{
            k = k + a[i];
        }
        // if(a[i]>0){
        //     p = a[i];
        // }
        // if(a[i] == -1){

        // }
    }

    
        cout<<c<<"\n";
    
    return 0;
}