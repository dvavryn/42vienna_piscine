#include <unistd.h>

void	ft_ten_queens_puzzle(void);
void ft_print_board(char board[10][10]);

int main (void)
{
	ft_ten_queens_puzzle();
}

void ft_ten_queens_puzzle(void)
{
	char chessboard[10][10];
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			chessboard[i][j] = 'O';
			j++;
		}
		i++;
	}
	ft_print_board(chessboard);
}

void ft_print_board(char board[10][10])
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			write(1, &board[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}