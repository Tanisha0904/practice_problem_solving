#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int  t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        long long int  c = 0;
        long long int  k = abs(a-b);
        if(k==0){
            cout<<"0 0\n";
        }
        else{
            long long int j = a%k;
            long long int c = min(j, k-j);
            cout<<k<<" "<<c<<"\n";
        }
        
    }
    return 0;
}
