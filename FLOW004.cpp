#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        int last,sum,first;
        last = N%10;
        while (N>0)
        {
            first = N;
            N = N/10;            
        }
        sum = first + last;
        printf("%d\n", sum);
    }
    
    
    
    return 0;
}
