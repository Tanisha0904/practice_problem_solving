#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int b(){
    string a;
    getline(cin,a);
    char arr[a.length()/3];
    vector<char> v;

    int k = 0;
    if(a.size()<3){
        return 0;
    }
    v.push_back(a[1]);
    // cout<<v.size()<<"\n";;
    // cout<<"a.ssize()"<<a.size()<<a<<" \n";;
    for(int i=4;i<a.length();i+=3){
        for(int j=0;j<v.size();j++){
            // cout<<"size = "<<v.size()<<"\n";
            if(a[i]!=v[j]){
                k = 1;
            }
            else{
                k = 0;
                break;
            }
        }
        if(k==1){
            v.push_back(a[i]);
        }
            
    }
    return  v.size();
}
int main(){
    cout<<b();

    return 0;
}