#include<bits/stdc++.h>
using namespace std;

int y(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            // x++;
            return 1;
        }
        else if(s[i]=='-'){
            // x--;
            return -1;
        }
        
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n--){
        
        string s;
        cin>>s;
        x+=y(s);
    }
    
    
    cout<<x<<"\n";

return 0;
}