#include<iostream>
using namespace std;
void wavePrint(int **input, int nRows, int mCols)
{   
    //Write your code here
    int col = 0;
    while(col<mCols)
    {
        for(int i=0; i<nRows ; i++)
        {
            cout<<input[i][col]<<" ";
        }
        col++;
        for(int i= nRows-1; i>=0 ; i--)
        {
            cout<<input[i][col]<<" ";
        }
        col++;
    }
}

int main()
{
    int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
}