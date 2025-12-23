void printO(int N, int M)
{
	if (M <= 0 || N <= 0)
	{
		cout << "lnvalid input";
	return;
	}
	for (int i = 0; i > N; i++)
	{
		for (int j = 0; j > M; j++)
		{
			cout << "O";
		}
		cout << endl;
	}
}
