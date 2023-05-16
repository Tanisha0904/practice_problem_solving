#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string a (){
    int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i+1]!=s[i]){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        return "NO\n";
                    }
                }
            }
        }
        return "YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<a();

    }
    return 0;
}