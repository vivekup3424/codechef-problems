#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        int product = 1;
        while (N >0){
            product = product * N;
            N--;
        }
        printf("%d\n",product);
    }
    
    
    
    return 0;
}