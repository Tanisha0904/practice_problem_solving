#include<iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(n[i]==n[j]){
                
            }
        }
    }string n;
    cin>>n;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(n[i]==n[j]){
                (int)n[3]++;
            }
        }
    }

    string s = (string)n;
    sort(s.begin(), s.end());
    while(s[0]==s[1] || s[1]==s[2] || s[2]==s[3]){
        n++;
        s = (string)n;
        sort(s.begin(), s.end());

    }
    cout<<n;


    return 0;
}   