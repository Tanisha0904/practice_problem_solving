#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n.length();i++){
        if(n[i] == '7' || n[i] == '4'){
            count ++;
        }
    }
    count == 4 || count == 7 ? cout<<"YES\n" : cout<<"NO\n";
return 0;
}   