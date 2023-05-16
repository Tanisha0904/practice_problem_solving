#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll s[4];
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s, s+4);
    int count = 0;
    for(int i=0;i<3;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;

    return 0;
}