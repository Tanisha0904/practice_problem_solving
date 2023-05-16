#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int j;
    int count = 0;
    sort(s.begin(), s.end());
    for(int i=0;i<s.length()-1; i++)
    {

        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    (s.length()-count)%2==0 ? cout<<"CHAT WITH HER!"<<"\n" : cout<<"IGNORE HIM!"<<"\n" ;


    return 0;
}