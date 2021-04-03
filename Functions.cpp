#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    if(a>b)
    {
        if(c>d)
        {
            if(a>c)
            {
                max = a;
            }
            else{
                max = c;
            }
        }
        else{
            if(a>d)
            {
                max = a;
            }
            else{
                max = d;
            }
        }
        
    }
    else{
        if(c>d)
        {
            if(b>c)
            {
                max = b;
            }
            else{
                max = c;
            }
        }
        else{
            if(b>d)
            {
                max = b;
            }
            else{
                max = d;
            }
        }
        
    }
    return max;
}

// INBUILT METHOD
// int max_of_four(int a, int b, int c, int d) {
//     return max(max(a,b),max(c,d));
// }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
