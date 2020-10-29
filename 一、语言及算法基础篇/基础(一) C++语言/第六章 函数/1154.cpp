#include<bits/stdc++.h>
using namespace std;
int s (int a)
{
    int b = 0;
    for (int i = 1; i <= a / 2; i++)
        if(a % i == 0)
            b += i;
    return b;
}
int main()
{
    int a = 2, b;
    while(a)
    {
        b = s(a);
        if (s(b) == a && a < b)
        {
            printf("%d %d", a, b);
            return 0;
        }
        a++;
    }
    return 0;
}