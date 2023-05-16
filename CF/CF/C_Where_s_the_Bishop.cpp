// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// vector<int> q() {
//     vector<int> v;
//      string a[8];
//         for(int i=0;i<8;i++){
//             cin>>a[i];
//         }
//         int c=0, l = 0;
//         int i=0,j = 0;
//         int k = 0;
//         for(i = 0;i<8;i++){
            
//             // int j=0;
//             for(j = 0;j<8;j++){
//                 if((a[i][j] == '#' && a[i][j+2]=='#')){
//                     l = 1;
//                     v.push_back(i+2);
//                     v.push_back(j+2);
//                     return v;
//                     // cout<<i+2<<" "<<j+2<<"\n";
//                     // break;
//                 }
//                 else if(a[i][j] == '#'){
//                     c++;
//                     k=j;
//                     break;
//                 }
                
//             }
//         }

//             if(c==1 && l == 0){
//                 // cout<<i<<" "<<k<<"\n";
//                 v.push_back(i+1);
//                 v.push_back(j+1);
//                 return v;
//             }
//             return v;
// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//     //    ll a,b;
//     //    a = q()[0];
//        cout<<q()[0]<<" "<<q()[1]<<"\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
     
     string a[8];
        for(int i=0;i<8;i++){
            cin>>a[i];
        }
        int c=0;
        int i;
        int k = 0;
        for(i = 1;i<7;i++){
            
            int j;
            for(j = 1;j<7;j++){
                if(a[i][j] == '#' && ( (a[i+1][j+1] == '#' && a[i+1][j-1]=='#') || (a[i-1][j+1] == '#' && a[i-1][j-1]=='#'))){
                    // c = 1;
                    // k=j;
                    // break;
                    cout<<i+1<<" "<<j+1<<"\n";
                    break;
                }
                
            }
        }

            // if(c==1){
            //     cout<<i<<" "<<k<<"\n";
                
            // }
    }
    return 0;
}