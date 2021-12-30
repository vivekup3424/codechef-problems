#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A,B,C;
        scanf("%d %d %d",&A, &B, &C);
        int arr[3] = {A,B,C};
        sort(arr,arr+3);
        printf("%d\n",arr[1]);

    }
    
    
    
    return 0;
}