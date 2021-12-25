/*
integer -- N
all arrays A of size = N
all prefix sums are odd
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   int T,lowest_sum =0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N,sum=0;
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            int m;
            scanf("%d",&m);
            sum = sum + m;
        }
        if (lowest_sum <= sum)
        {
            lowest_sum == sum;
        }
        printf("%d",sum);
    }
    printf("%d",lowest_sum);
    
    
    
    return 0;
}
