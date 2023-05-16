#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    int max = b[0], x = b[0];
    for(int i=0;i<n-1;i++){
        x =  x - a[i+1] + b[i+1];
        max = max >x ? max :x ;
    }
    cout<<max<<"\n";
return 0;
}