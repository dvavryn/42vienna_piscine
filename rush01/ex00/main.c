void ft_putchar(char c);

int main(int argc, char *argv)
{
	char logic[6][6];

	if (argc != 17)
	{
		write(2, "WRONG INPUT, 12");
		return 1;
	}
	else
	{
		logic[0][1] = argv[1];
		logic[0][2] = argv[2];
		logic[0][3] = argv[3];
		logic[0][4] = argv[4];
		logic[5][1] = argv[5];
		logic[5][2] = argv[6];
		logic[5][3] = argv[7];
		logic[5][4] = argv[8];
		logic[1][0] = argv[9];
		logic[2][0] = argv[10];
		logic[3][0] = argv[11];
		logic[4][0] = argv[12];
		logic[1][0] = argv[13];
		logic[2][0] = argv[14];
		logic[3][0] = argv[15];
		logic[4][0] = argv[16];
	}
	int x = 1;
	int y = 1;

	while (y <= 4)
	{
		while (x <= 4)
		{
			ft_putchar('A');
		}
	}
	return 0;
}