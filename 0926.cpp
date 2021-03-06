#include <iostream>
using namespace std;

int f[11][11];
int tileNumber = 0;

char symbol(int x) {
	if (x == -2) return '.';
	if (x == -1) return '@';
	if (x < 26) return 'a' + x;
	return 'A' + x - 26;
}

void verticalTile(int x, int y)
{
	f[x][y] = tileNumber;
	f[x + 1][y] = tileNumber;
	++tileNumber;
}

void horizontalTile(int x, int y)
{
	f[x][y] = tileNumber;
	f[x][y + 1] = tileNumber;
	++tileNumber;
}

void tile(int x1, int y1, int x2, int y2)
{
	if ((x2 < x1) || (y2 < y1)) return;
	if ((x2 - x1) % 2 != 0) { //vertical tiling
		for (int i = x1; i < x2; i += 2) {
			for (int j = y1; j <= y2; ++j) {
				verticalTile(i, j);
			}
		}
		return;
	}
	if ((y2 - y1) % 2 != 0) { //horizontal tiling
		for (int i = x1; i <= x2; ++i) {
			for (int j = y1; j < y2; j += 2) {
				horizontalTile(i, j);
			}
		}
		return;
	}
}

int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	--n; --m; --x; --y;

	f[x][y] = -1;

	int left = y - 1 - (y & 1);
	int right = y + 1 + ((m - y) & 1);
	int top = x - 1 - (x & 1);
	int bottom = x + 1 + ((n - x) & 1);

	tile(0, 0, n, left);
	tile(0, right, n, m);
	tile(0, left + 1, top, right - 1);
	tile(bottom, left + 1, n, right - 1);

	if (right - left == 4 && bottom - top == 4) {
		//3x3
		verticalTile(top + 1, left + 1);
		verticalTile(top + 2, left + 3);
		horizontalTile(top + 1, left + 2);
		horizontalTile(top + 3, left + 1);
	}
	else if (right - left == 2 && bottom - top == 2) {
		//1x1
	}
	else {
		cout << "-1" << endl;
		return 0;
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << symbol(f[i][j]);
		}
		cout << endl;
	}
	system("pause");
	return 0;

}

