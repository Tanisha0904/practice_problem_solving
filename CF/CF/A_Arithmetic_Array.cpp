#include<bits/stdc++.h>
#define ll long long int
using namespace std;
double arraySum(ll a[], int n) 
{
    double initial_sum  = 0; 
    return accumulate(a, a+n, initial_sum);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }   
        // k>arraySum(a, n) ? 
        if((double)arraySum(a, n)/n>=1){

        cout<<abs(n-abs(arraySum(a, n)))<<"\n";
        }
        else{
            cout<<1<<"\n";
        }

    }
    return 0;
}