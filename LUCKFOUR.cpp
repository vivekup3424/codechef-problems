#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N,count = 0;
        scanf("%d",&N);
        while(N>0){
            if (N%10 == 4)
            {
                count++;
            }
            N = N/10;      
        }
        printf("%d\n",count);
    }
    
    
    
    return 0;
}
