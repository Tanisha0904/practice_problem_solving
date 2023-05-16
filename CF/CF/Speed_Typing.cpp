#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string q,o;
        cin>>q>>o;
        int i=0,  j=0;
        while(i<q.length() && j<o.length()){
            if(q[i]==o[j]){
                i++;
                j++;
            }
            else{
                break;
            }
        }
    }


return 0;
}