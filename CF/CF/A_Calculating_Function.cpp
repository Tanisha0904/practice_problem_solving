#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    double sum = 0;
    // for(int i=1;i<=n;i++){
    //     // sum = sum + pow((-1), i)*i;
    //     if(i%2!=0){
    //         sum = sum - i;
    //     }
    //     else{
    //         sum  = sum + i;
    //     }
    // }
    if(n%2==0){
        
        cout<<((n/2)*((n/2)+1) - (n*n/4))<<"\n";
    }
    else{
        cout<<((n/2)*((n/2)+1) - ((n+1)*(n+1)/4))<<"\n";

    }
    // cout<<sum;
    return 0;
}