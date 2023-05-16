#include<iostream>
using namespace std;
string a(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            return "HARD\n";
        }
    }
    return "EASY\n";
}
int main(){
    cout<<a();
    return 0;
}