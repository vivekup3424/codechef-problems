//integer N where N <= 10
//array A length N 0,1,2
#include <bits/stdc++.h>
using namespace std;

class SOLUTION
{
    public:
    int peaks(int n)
    {
        if(n<3)
        {
            return 0;
        }
        else
        {
            int sum = 10*(n-2)*pow(3,n-3);
            return sum;
        }       
    }
};
int main(){
    //your code goes here
    SOLUTION sol;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int value;
        scanf("%d",&value);
        cout<<sol.peaks(value)<<endl;
    }
    return 0;
}