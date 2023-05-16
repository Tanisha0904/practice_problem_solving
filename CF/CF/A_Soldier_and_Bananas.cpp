#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    
    
    int sum = k;
    int i=2;

    while(w>1){
        sum=sum+ (k*i);
        i++;
        w--;
    }
    n>sum ? cout<<"0\n" : cout<<(sum-n)<<"\n";
    return 0;
}