#include <stdio.h>
int main()
{
    long long S, T, i, c, r, root, d;
    scanf (" %lld", &T);
    for (i = 1; i <= T; i++)
    {
        scanf (" %lld", &S);
        root = sqrt (S);
        d = S - root * root;
        if (d == 0)
        {
            if (root % 2 == 0)
            {
                r = 1;
                c = root;
            }
            else
            {
                r = root;
                c = 1;
            }
        }
        else if (d > root)
        {
            if (root % 2 == 0)
            {
                r = root + 1;
                c = 2*root + 2 - d;
            }
            else
            {
                r = 2*root + 2 - d;
                c = root + 1;
            }
        }
        else
        {
            if (root % 2 == 0)
            {
                r = S - root * root;
                c = root + 1;
            }
            else
            {
                r = root + 1;
                c = S - root * root;
            }
        }
        printf ("Case %lld: %lld %lld\n", i, c, r);
    }

    return 0;
}
