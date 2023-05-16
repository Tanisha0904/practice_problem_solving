// A_Deletions_of_Two_Adjacent_Letters.cpp

#include<bits/stdc++.h>
using namespace std;
string letter(){
    string s,c;
    cin>>s>>c;
        
    for(int i=0; i<s.length(); i++){
        if(s[i]==c[0] ){
            if(i%2==0){
                return "YES";
            }            
        }            
    }
    return "NO";
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s,c;
    cin>>s>>c;
        int k=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c[0] ){
            if(i%2==0){
                // return "YES";
                k=1;
            }            
        }            
    }
    // return "NO";
    if(k==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
        // cout<<letter()<<"\n";
    }
    return 0;
}
