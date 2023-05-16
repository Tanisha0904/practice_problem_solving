#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        int maxx = a[0], minn = a[0];
        for(int i=1;i<n;i++){
            if(a[i]<minn)    minn = i;
            if(a[i]>maxx)    maxx = i;
        }
        int l = min(minn, maxx);
        int r = max(minn, maxx);
        cout<<l<<" "<<r<<"\n";
        int arr[3] = {n-l, r, l+1+n-r};

        
        cout<<*min_element(a, a+n)<<"\n";
    }
}
