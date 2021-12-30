#include <bits/stdc++.h>
using namespace std;

int main()
{   int N;
    scanf("%d", &N);
    int num = 0;
    for (int i = 1; i < 11; i++)
    {
        if (N%i == 0)
        {
            num = i;
        }
        else
        {
            num = num;
        }
        
    }
    printf("%d\n",num);
    return 0;
}