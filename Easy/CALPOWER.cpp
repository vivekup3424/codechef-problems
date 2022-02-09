#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    int sum = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        sum = sum + (i*(s[i-1]-96));
    }
    cout<<sum<<endl;
    }   
    return 0;
}
