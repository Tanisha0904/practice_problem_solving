#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int c2 = round(n/3);
        long long int c1 = round(n/3);
        if(n%3 == 1){
            c1++;
        }
        else if(n%3==2){
            c2++;
        }
        cout<<c1<<" "<<c2<<"\n";

    }
    return 0;
}