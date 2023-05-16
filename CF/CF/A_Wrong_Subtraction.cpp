#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    for(long long int i=0;i<k;i++){
        if(n%10==0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }
    cout<<n<<"\n";
return 0;
}