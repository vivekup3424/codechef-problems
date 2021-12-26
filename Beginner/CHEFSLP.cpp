/*
N -- slippers
L-- left one
N-l -- right ones
X -- price for each pair
T
N L X
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, L, X,R,price=0;
        scanf("%d %d %d",&N, &L, &X);
        R = N-L;
        if (R >= L)
        {
            price = L * X;
        }
        else
        {
            price = X*R;
        }
        printf("%d\n",price);
    }
    
    
    
    return 0;
}