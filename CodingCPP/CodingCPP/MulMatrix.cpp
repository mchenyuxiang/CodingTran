#include "main.h"

#include <iostream>

using namespace std;

#define ROW 800
#define COL 800

int a[ROW][COL];
int b[ROW][COL];
int c[ROW][COL];

int mulMatrix()
{
	freopen("test.txt", "r", stdin);

	int m, n, p, q;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
	cin >> p >> q;
	for (int i = 0; i < p; ++i)
		for (int j = 0; j < q; ++j)
			cin >> b[i][j];
	for(int i=0;i<m;++i)
		for (int j = 0; j < q; ++j) {
			c[i][j] = 0;
			for (int k = 0; k < q; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < q; ++j) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
			 
}