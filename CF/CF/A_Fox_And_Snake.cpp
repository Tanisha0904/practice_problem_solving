#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]='.';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                a[i][j] = '#';
            }
            
        }
        
        // a[n-1][i] = '#';
    }
    for(int i=1;i<n-1;i+=4){
        a[i][m-1]='#';
    }
    for(int i=3;i<n-1;i+=4){
        a[i][0]='#';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}