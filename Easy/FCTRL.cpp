#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*code*/
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int N;
        cin >> N;
        int num_of_five = 0;
        while (N!=0)
        {
            num_of_five += N/5;
            N = N/5;
        }
        cout << num_of_five << "\n";
    }
    return 0;
}