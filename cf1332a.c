#include <stdio.h>
int main()
{
	long long t, a, b, c, d, x, x1, x2, y, y1, y2;
	scanf("%lld", &t);
	for (long long i = 0; i < t; i++)
	{
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        scanf("%lld%lld%lld%lld%lld%lld", &x, &y, &x1, &y1, &x2, &y2);
		x += b - a;
		y += d - c;
		if (x1 == x2 && (a != 0 || b != 0))
			printf("No\n");
		else if (y1 == y2 && (c != 0 || d != 0))
			printf("No\n");
		else if (x < x1 || x > x2 || y < y1 || y > y2)
			printf("No\n");
		else
			printf("Yes\n");
	}
}
