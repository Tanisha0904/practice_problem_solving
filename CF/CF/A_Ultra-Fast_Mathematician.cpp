#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }

    return 0;
}