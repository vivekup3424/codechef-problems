#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*code*/
    int T;
    scanf("%d",&T);
    for(int i =0;i<T;i++)
    {
        int N,K,S;
        scanf("%d %d %d",&N,&K,&S);
        int odd_sum = N*N;

        //vector<int> first_odd_numbers;
        //for (int i = 1; i <= N ; i++)
        //{   int odd = 2*i +1;
        //    first_odd_numbers.push_back(odd);
        //}

        for (int  i = 1; i <= N; i++)
        {   int repeat_sum = ((2*i)-1)*(K-1);
            int repeat_num = (2*i)-1;
            if(S == repeat_sum + odd_sum)
            {
                printf("%d\n",repeat_num);
                break;
            }
            else
            {
                continue;
            }
                 
        }
        
    }   
    return 0;
}