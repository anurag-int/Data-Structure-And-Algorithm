#include <iostream>

using namespace std;

bool SolveSudoku(int grid[9][9])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
            {
                for (int c = 1; c <= 9; c++)
                {
                    if (isValid(grid, i, j, c))
                    {
                        grid[i][j] = c;

                        if (SolveSudoku(grid) == true)
                            return true;
                        else
                            grid[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

bool isValid(int grid[9][9], int row, int col, int c)
{
    for (int i = 0; i < 9; i++)
    {
        if (grid[i][col] == c)
            return false;
        if (grid[row][i] == c)
            return false;
        if (grid[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
            return false;
    }
    return true;
}

// Function to print grids of the Sudoku.
void printGrid(int grid[9][9])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << grid[i][j] << " ";
        }
    }
}

int main()
{

    int t;
    cin >> t;

    
        int arr[9][9];
        int N = 9;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> arr[i];
            }
        }

        if (SolveSudoku(arr) == true)
        {
            printGrid(arr);
        }
        else
        {
            cout << " It's Not a Valid Sudoku !";
        }
    

    return 0;
}