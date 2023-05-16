#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    double  sum = 0;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++) {
        cin>>p[i];
        sum  = sum + p[i];
    }
    cout<<fixed<<setprecision(12)<<sum/(n)<<"\n";
    return 0;
}


