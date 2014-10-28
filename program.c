
#include<stdio.h>




void add(int a[30][30],int b[30][30],int c[30][30],int n) {


	int i,j;
	for (i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}

