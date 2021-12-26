#include <bits/stdc++.h>
using namespace std;

int main()
{   int N;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {   int m,sum;
        scanf("%d",&m);
        sum = 0;
    while (m > 0)
    {
        int a;
        a = m%10;
        m = m/10;
        sum += a;
    }
    printf("%d\n", sum);
    }
    
    return 0;
}
