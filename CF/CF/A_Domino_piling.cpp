#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,c;
    cin>>m>>n;
    if(m<n) {
        swap(m,n);
    } if(m%2!=0){
        c = n/2;
    }else{
        c = 0;
    }
    cout<<((m/2)*n + c)<<"\n";
return 0;
}   