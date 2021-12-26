//bits/stdc++.h  works in linux.
//It loads most of the libraries required
#include <bits/stdc++.h>
using namespace std;

int main(){
    //read the number of test cases
    int T;
    scanf("%d",&T);

    for (int i = 0; i < T; i++){  
    //read the input a and b
    int a,b;
    scanf("%d %d",&a,&b);
    //computing the sum
    int c;
    c = a+b;
    printf("%d\n", c);
    }
    return 0;
}