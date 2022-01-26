#include<iostream>
#include<climits>
using namespace std;
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int rowSum = 0, colSum = 0;
    int row=0, col=0, max=INT_MIN;
    int rowIndex = 0, colIndex = 0;
    int flag = 0;

    //sum of row
    while(row<nRows)
    {
        for(int i=0 ; i<mCols ; i++)
        {
            rowSum = rowSum + input[row][i];
        }
        if(rowSum>max)
        {
            max = rowSum;
            rowIndex = row;
            flag = 1;
        }
        row++;
        rowSum = 0;
    }

    //sum of col
    while(col<mCols)
    {
        for(int i=0 ; i<nRows ; i++)
        {
            colSum = colSum + input[i][col];
        }
        if(colSum>max)
        {
            max = colSum;
            colIndex = col;
            flag = 0;
        }
        col++;
        colSum = 0;
    }
    //printing the max
    if(flag == 1)
    {
        cout<<"row"<<" "<<rowIndex<<" "<<max;
    }else
    {
        cout<<"col"<<" "<<colIndex<<" "<<max;
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

		findLargest(input, row, col);
		cout << endl;
}