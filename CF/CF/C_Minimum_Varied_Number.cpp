#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int> v;
        v.push_back(0);
        if(s>=9){
            s=s-9;
            v.push_back(9);
        }
        if(s>=8){
            s = s -8;
            v.push_back(8);
        }
        if(s>=7){
            s = s -7;
            v.push_back(7);
        }
        if(s>=6){
            s = s -6;
            v.push_back(6);
        }
        if(s>=5){
            s = s -5;
            v.push_back(5);
        }
        if(s>=4){
            s = s -4;
            v.push_back(4);
        }
        if(s>=3){
            s = s -3;
            v.push_back(3);
        }
        if(s>=2){
            s = s -2;
            v.push_back(2);
        }
        if(s>=1){
            s = s -1;
            v.push_back(1);
        }
        for(int i=v.size()-1;i>0;i--){
            cout<<v[i];
        }
        cout<<"\n";
        
    }
}