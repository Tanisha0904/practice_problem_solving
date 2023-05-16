#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 0, min = 0, max = 0, j;
    for( j=0;i<n;j++){
        if(a[j]>max)    max = a[j];
        if(a[j]<min)    min = a[j];
    }
    
    return 0;
}