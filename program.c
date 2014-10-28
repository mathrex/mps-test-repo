#include<stdio.h>

void inmul(int first[10][10], int second[10][10], int multiply[10][10])
{
  int m, n, p, q, c, d, k, sum = 0;
  m = p = q = 10;
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
}

void add(int a[30][30],int b[30][30],int c[30][30],int n) {


	int i,j;
	for (i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void print(int a[10][10])
{
  int i = 0, j = 0;
  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
      printf("%d ", a[i][j]);
    }
    printf("/n");
  }
}
