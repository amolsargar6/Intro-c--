#include<iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int row_start = 0, row_end = nRows-1, col_start = 0, col_end = nCols-1;

    while(row_start<=row_end && col_start<=col_end)
    {
        //for row start
        for(int col=col_start ; col<=col_end ; col++)
            cout<<input[row_start][col]<<" ";
        
        row_start++;

        //for col end
        for(int row=row_start ; row<=row_end ; row++)
            cout<<input[row][col_end]<<" ";
        
        col_end--;

        //for row end
        for(int col=col_end ; col>=col_start ; col--)
            cout<<input[row_end][col]<<" ";

        row_end--;

        //for col start
        for(int row=row_end ; row>=row_start ; row--)
            cout<<input[row][col_start]<<" ";
        
        col_start++;
    }
}

int main()
{
    int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
}