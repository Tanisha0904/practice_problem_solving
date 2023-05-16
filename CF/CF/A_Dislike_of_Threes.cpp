#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int c,  count=1;
        for(int i=1; count<=k;i++){
            if(i%3!=0 && (i-3)%10 !=0){
                c = i;
                count++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}