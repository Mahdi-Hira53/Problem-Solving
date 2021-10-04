#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[50];
    int count = 1;

    while (scanf("%s", &s))
    {
        if (s[0] == '*')
            break;
        else if (s[0] == 'H')
            printf("Case %d: Hajj-e-Akbar\n", count);
        else
            printf("Case %d: Hajj-e-Asghar\n", count);
        count++;
    }
}
