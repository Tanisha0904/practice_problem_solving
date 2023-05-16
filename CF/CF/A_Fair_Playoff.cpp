#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        int max1, max2;
        int j = 0;
        for(int i=0;i<4;i++){
            cin>>a[i];            
        }
        max1 = max(a[0], a[1]);
        max2 = max(a[2], a[3]);
        sort(a, a+4);
        

       
        if((max1 == a[3] && max2 == a[2]) || (max1 == a[2] && max2 == a[3])){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}