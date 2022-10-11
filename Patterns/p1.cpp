#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = n, j = m;
    // p1
    while (i--)
    {
        while (j--)
        {
            cout << "*";
        }
        j = m;
        cout << "\n";
    }
    // p2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }

    // p3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    // p4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    // p5
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << '*';
        }
        cout << "\n";
    }
    // p6
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    // p7
    // n needs to be odd
    // int k = (n - 1) / 2;
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 1; j <= (n - i - 2) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << " \n";
    }
    // p8 
    cout<<"----------\n";
    // k = (n - 1) / 2;
    for (int i = n; i >=1; i -=2)
    {
        for (int j = (n - i - 2) / 2; j >=1 ; j--)
        {
            cout << " ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << '*';
        }
        cout << " \n";
    }
cout<<"\np17\n";
for(int i=1;i<=n;i++){
    for(j='A';j<='Z';i++){
        cout<<
    }
}
    return 0;
}

