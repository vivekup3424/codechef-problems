//INTEST
//Note that this problem require fast computation
//We can use std::printf and std::scanf from stdio.h of C which are quite fast. 
#include <bits/stdc++.h>
using namespace std;

//If you want to use cin and cout which are comparatively slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)


int main()
{   int n,k,a=0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {   int m;
        scanf("%d",&m);
        if (m%k == 0)
        {
            a++;
        }   
    }
    printf("%d",a);
    return 0;
}
