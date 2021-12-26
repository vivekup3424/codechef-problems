/*
Chef --X-- chefArina --Y-- chefLand
Chef -- Z-- chefLand

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int X,Y,Z;
        scanf("%d %d %d",&X, &Y, &Z); //TRAIN , PLANEBUS , EQUAL
        if (X+Y > Z)
        {
            printf("TRAIN\n");
        }
        else if (X + Y == Z)
        {
            printf("EQUAL\n");
        }
        else
        {
            printf("PLANEBUS\n");
        }
    }
    
    
    
    return 0;
}