#include "main.h"
#include <cstdio>

void scanfTest()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		printf("%d\n", n + m);
	}
}