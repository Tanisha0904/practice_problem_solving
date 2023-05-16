#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    vector<int> vec;
    for(int i=0;i<a.length();i++){
        if(a[i]!='+'){
            vec.push_back((int)a[i]);
        }
        
    }
    
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i];
        if(i!=vec.size()-1){
            cout<<"+";
        }
    }
    


    return 0;
}