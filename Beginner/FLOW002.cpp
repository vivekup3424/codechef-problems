#include <bits/stdc++.h>
using namespace std;

int main()
{ int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A,B,C;
        scanf("%d %d", &A, &B);
        C = A%B;
        printf("%d\n",C);
    }    
    return 0;
}
