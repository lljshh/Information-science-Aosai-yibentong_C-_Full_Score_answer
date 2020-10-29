#include<bits/stdc++.h>
using namespace std;
bool s (int a)
{
    for(int i = 2; i * i <= a; i++)
    {
        if(a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int a, t = 0;
    scanf("%d", &a);
    for (int i = 2; i <= a - 2; i++)
        if(s(i) && s(i + 2))
            printf("%d %d\n", i, i+2);
    return 0;
}