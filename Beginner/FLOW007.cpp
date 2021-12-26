#include <bits/stdc++.h>
using namespace std;

//signed integer constant have -32768 to 32768

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        long int N,sum = 0; //sum will take the place of N reversed
        scanf("%ld",&N);
        while (N >0){
        int a;
        a = N%10;
        sum = (sum*10) + a;
        N = N/10;
        //N = N
        }
        printf("%ld\n",sum);
    }
    
    
    
    return 0;
}
