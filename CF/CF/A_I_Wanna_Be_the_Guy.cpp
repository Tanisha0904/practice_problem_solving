#include<bits/stdc++.h>
#define ll long long int
using namespace std;


 string a(){
     int n;
    cin>>n;
    int p,q;
    cin>>p;
    int arr[200];
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p;i<q+p;i++){
        cin>>arr[i];
    }
    sort(arr, arr+p+q);
    if((p == 0 && q == 0) || arr[p+q-1]!=n || arr[0]!=1){
        return "Oh, my keyboard!";
    }
    for(int i=0;i<p+q-1;i++){
        if(arr[i+1]-arr[i]>1 || arr[p+q-1]!=n || arr[0]!=1){
            return "Oh, my keyboard!";
        }
    }
    return "I become the guy.";

 }
int main(){
    cout<<a();
return 0;
}