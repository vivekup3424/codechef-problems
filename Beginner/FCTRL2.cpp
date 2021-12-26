#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        long long int product = 1;
        while (N >0){
            product = product * N;
            N--;
        }
        //printf("%\n",product);
        printf("%lld\n",product);
    }    
    return 0;
}