#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{   int N;
    scanf("%d", &N);              // number of rounds
    int sum_S = 0,sum_T = 0;
                                  //initial of player S and T =0
    vector<int> vector_S{};
    vector_S.push_back(0);
    vector_S.push_back(0);        //vector to store leading difference    
                                  
    vector<int> vector_T{};
    vector_T.push_back(0);
    vector_T.push_back(0);        //of respective player in each round
    for (int i = 0; i < N; i++)
    {   
        int Si,Ti;
        scanf("%d %d",&Si, &Ti); //Si is first, Ti is second
        sum_S = sum_S + Si;      //cumulative  score after each 
        sum_T = sum_T + Ti;      //round
        if (sum_S > sum_T)
        {
            vector_S.push_back(sum_S - sum_T);
        }
        else if(sum_T > sum_T)
        {
            vector_T.push_back(sum_T - sum_S);
        }
        //else
        //{
        //    continue;
        //}
        

    }
    sort(vector_S.begin(),vector_S.end()); //sorting the given 
    sort(vector_T.begin(),vector_T.end());  
    
      //vector in ascending order
    if (vector_S[vector_S.size() -1]>vector_T[vector_T.size() - 1])
    {
        cout<<1<<" "<<vector_S[vector_S.size() -1]<<endl;
    }
    else if((vector_T[vector_T.size() - 1]) > (vector_S[vector_S.size() -1])){
        cout<<2<<" "<<vector_T[vector_T.size() - 1]<<endl;
    }
    
    return 0;
}