#include "main.h"
#include <iostream>

using namespace std;

int OJscanf()
{
	int n, mx = 0;
	while (scanf("%d", &n) != EOF) {
		if (n > mx)
			mx = n;
	}
	printf("%d\n", mx);
	return 0;
}