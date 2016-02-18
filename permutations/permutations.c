#include <stdio.h>
#include <stdlib.h>

#define N 3

int show(int *x, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d%c", x[i], i == len - 1 ? '\n' : ' ');
	return 1;
}

/* Boothroyd method; exactly N! swaps, about as fast as it gets */
void boothroyd(int *x, int n, int nn, int callback(int *, int))
{
	int c = 0, i, t;
	while (1) {
		if (n > 2) boothroyd(x, n - 1, nn, callback);
		if (c >= n - 1) return;
 
		i = (n & 1) ? 0 : c;
		c++;
		t = x[n - 1], x[n - 1] = x[i], x[i] = t;
		if (callback) callback(x, nn);
	}
}


/* entry for Boothroyd method */
void perm2(int *x, int n, int callback(int*, int))
{
	if (callback) callback(x, n);
	boothroyd(x, n, n, callback);
}

int main()
{
	int i, x[N];
	for (i = 0; i < N; i++) x[i] = i + 1;
 
	perm2(x, N, show);
 
	return 0;
}
