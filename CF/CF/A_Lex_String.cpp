#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void a(string a, string b, int k, int ca, int i, string c){
    c = c + a[i];
    i++;
    ca++;
}
void b(string a, string b, int k, int cb, int j, string c){
    c = c + b[i];
    j++;
    cb++;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        string c;
        // for(int i=0,  j=0;i<n && j<m;){
           
                // int ca = 0;
                // while(ca<=k){
                //      if(a[i]<b[j]){
                //     c = c + a[i];
                // i++;
                // ca++;
                //      }
                // }                
            
            
                // int cb = 0;
                // while(cb<=k){
                //     if(b[j]<=a[i]){
                //     c = c + b[j] ;
                // j++;
                // cb++;
                //     }
                // }  
                // while(ca<=k && cb<=k){
                //     if(a[i]<b[j]){
                //         c = c + a[i];
                //         i++;
                //         ca++;
                //     }
                //     else{
                //         c = c + b[j];
                //         j++;
                //         cb++;
                //     }
                // }
             
             int i = 0, j = 0;
             while(i<n && j < m){
                if(a[i]<b[i] && ca<k ){
                    a(a,b,ca,k,i,c);
                }
                else{
                    b(a,b,cb,k,j,c);
                }
                if(ca = k){
                    ca = 0;
                }
                if(cb = k){
                    cb = 0;
                }
             }
            
        }
        cout<<c<<"\n";
    }
    return 0;
}