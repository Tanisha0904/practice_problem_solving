#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    while(n--){
        int a[3], j=0;
        cin>>a[0]>>a[1]>>a[2];
        for(int i=0;i<3;i++){
            if(a[i]==1){
                j++;
            }
        }
        if(j>=2){
            count++;
        }
    }
    
    cout<<count<<"\n";
return 0;
}