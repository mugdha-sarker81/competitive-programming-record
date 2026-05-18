//https://codeforces.com/contest/2230/problem/A

#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {   
        long long n, a, b;
        scanf("%lld %lld %lld", &n, &a, &b);
        
        long long group = n / 3;
        long long rem = n % 3;
        long long sum = 0;
 
        if (3 * a <= b)
        {
            sum = n * a;
        }
        else 
        {
            sum = group * b; 
            if (rem * a < b) {
                sum += rem * a;
            } else {
                sum += b;
            }
        }
        
        printf("%lld\n", sum);     
    }
    return 0;
}
