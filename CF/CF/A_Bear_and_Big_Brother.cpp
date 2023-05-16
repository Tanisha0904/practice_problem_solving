#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b;
    cin>>l>>b;

    
    int count = 0;
    while(l<=b){
        count++;
        l*=3;
        b*=2;

    }
    cout<<count<<"\n";

    return 0;
}