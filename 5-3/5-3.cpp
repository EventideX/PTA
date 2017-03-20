#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int i, j, k, n, m, s, t, a[30];
	char c[1000];
	cin >> n;
	fgets(c, 1000, stdin);
	while (1 > 0)
	{
		fgets(c, 1000, stdin);
		j = -1;
		i = 0;
		while (i < strlen(c))
		{
			if ((c[i] >= '0') && (c[i] <= '9'))
			{
				m = 1;
				if (c[i - 1] == '-') m = -1;
				t = 0;
				while ((c[i] >= '0') && (c[i] <= '9'))
				{
					t = 10 * t + c[i] - '0';
					i++;
				}
				j++;
				a[j] = t*m;
			}
			i++;
		}
		if ((j == 0) && (a[0] == 100)) break;
		j++;
		s = 0;
		if (j > n)
		{
			for (i = 0; i < n; i++)
				s += a[i];
			cout << s / n << endl;
		}
		else
		{
			for (i = 0; i < j; i++)
				s += a[i];
			cout << s / j << endl;
		}
	}
	return 0;
}