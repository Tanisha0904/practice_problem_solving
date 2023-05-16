#include<bits/stdc++.h>
#define ll long long int
using namespace std;


string a(){
    int n, m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    if(a[0][0]=='R'){
        return "YES\n";
    }
    else{
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<a;
    }
    return 0;
}