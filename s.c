#include <stdio.h>


int        exist_row(int sudoku[9][9], int row, int num)
{
    int col = 0;
    while (col < 9)
    {
        if (sudoku[row][col] == num)
            return (1);
        col++;
    }
    return (0);
}

int        exist_col(int sudoku[9][9], int col, int num)
{
    int row = 0;
    while (row < 9)
    {
        if (sudoku[row][col] == num)
            return (1);
        row++;
    }
    return (0);
}

int        exist_box(int sudoku[9][9], int startRow, int startCol, int num)
{
    int row = 0;
    while ( row < 3)
    {
        int col = 0;
        while (col < 3)
        {
            if (sudoku[row + startRow][col + startCol] == num)
                return (1);
            col++;
        }
        row++;
    }
    return (0);
}

int        is_safe_num(int sudoku[9][9], int row, int col, int num)
{
    return (!(exist_row(sudoku, row, num)) &&
        !(exist_col(sudoku, col, num)) &&
        !(exist_box(sudoku, row - (row % 3), col - (col %3), num)));
}

int        find_unassigned(int sudoku[9][9], int *row, int *col)
{
    *row = 0;
    while (*row < 9)
    {
        *col = 0;
        while (*col < 9)
        {
            if (sudoku[*row][*col] == 0)
                return (1);
            (*col)++;
        }
        (*row)++;
    }
    return (0);
}

int        solve(int sudoku[9][9])
{
    int row = 0;
    int col = 0;
    
    if (!find_unassigned(sudoku, &row, &col))
        return (1);
    int num = 1;
    while (num <= 9)
    {
        if (is_safe_num(sudoku, row, col, num))
        {
            sudoku[row][col] = num;
            
            if (solve(sudoku))
                return (1);
            sudoku[row][col] = 0;
        }
        num++;
    }
    return (0);
}

void    print_sudoku(int sudoku[9][9])
{
    int row = 0;
    while (row < 9)
    {
        int col = 0;
        while (col < 9)
        {
            ft_putchar(sudoku[row][col]);
            col++;
        }
        row++;
        ft_putchar("\n");
    }
}

int        main(int ac, char **av)
{
    int sudoku[9][9];
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j <9)
		{
			sudoku[i - 1][j] = av[i][j];
			j++;
		}
		i++;
	}

	if (solve(sudoku))
		print_sudoku(sudoku);
	else
		ft_putstr("no solution");
	return (0);
}