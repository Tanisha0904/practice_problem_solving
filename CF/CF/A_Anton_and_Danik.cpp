#include<bits/stdc++.h>
using namespace std;

string a(){
    int n, a=0, d = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        return "Anton";
    }
    else if(d>a){
        return "Danik";
    }
    else{
        return "Friendship";
    }
}
int main(){
    cout<<a();
    return 0;
}