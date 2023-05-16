#include<bits/stdc++.h>
using namespace std;

string a(){
    string s, t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[t.length()-i-1]){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    cout<<a();
return 0;
}   