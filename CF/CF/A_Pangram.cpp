#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string b(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26] ;
    for(int i=0;i<26;i++){
        a[i] = 0;
    }
    // int A[26] ;
    // for(int i=0;i<26;i++){
    //     A[i] = 0;
    // }
    if(n<26){
        return "NO\n";
    }
    else{
        for(int i = 0;i < s.size(); i++){
            // if(isupper(s[i])){
            //     A[s[i]-65] = 1;
            // }
            // if(islower(s[i])){
            //     a[s[i]-65] = 1;
            // }
            if(isupper(s[i])){
                a[s[i]-65] = 1;
            }
            if(islower(s[i])){
                a[s[i]-97] = 1;
            }

        }
        for(int i = 0;i<26;i++){
            if(a[i] == 0 ){
                return "NO\n";
            }
        }
    }
    return "YES\n";
}
int main(){
    cout<<b();
    return 0;
}