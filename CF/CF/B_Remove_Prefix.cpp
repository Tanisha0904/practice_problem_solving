#include<bits/stdc++.h>
using namespace std;
#define long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        int a[n];
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<n;i++)    cin>>a[i];

        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(a[i]==a[j]){
                    v.push_back(j);
                    j=-1;
                }
            }
        }
        if(v.size()==1){ 
            cout<<"0\n";
        }
        else
            cout<<*max_element(v.begin(), v.end())+1<<"\n";
    }
}