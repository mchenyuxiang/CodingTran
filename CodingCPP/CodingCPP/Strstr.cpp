#include "main.h"

#include <cstring>
#include <iostream>

using namespace std;

int Strstr(char s1[], char s2[]);

char s1[100];
char s2[100];

int StrTest() {
	freopen("test.txt", "r", stdin);
	cin.getline(s1, sizeof(s1));
	cin.getline(s2, sizeof(s2));
	cout << Strstr(s1, s2) << endl;
	return 0;
}

int Strstr(char s1[], char s2[])
{
	if (s2[0] == 0)
		return 0;
	for (int i = 0; s1[i]; ++i) {
		int k = i, j = 0;
		for (; s2[j]; ++j,++k) {
			if (s1[k] != s2[j])
				break;
		}
		if (s2[j] == 0)
			return i;
	}
	return -1;
}
