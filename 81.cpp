#define N 80

int main()
{
	int map[N][N],i,j;
	freopen("matrix.txt","r",stdin);
	freopen("output.txt","w",stdout);
	for (i=0;i < N;i++)
		for (j=0;j < N;j++)
			scanf("%d,",&map[i][j]);
	for (i=0;i < N;i++)
	{
		for (j=0;j < N;j++)
		{
			if (!i&&j) map[i][j] += map[i][j-1];
			else if (!j&&i) map[i][j] += map[i-1][j];
			else if (i&&j)
			{
				if (map[i-1][j] < map[i][j-1]) map[i][j] += map[i-1][j];
				else map[i][j] += map[i][j-1];
			}
		}
	}
	printf("%d\n",map[N-1][N-1]);
}