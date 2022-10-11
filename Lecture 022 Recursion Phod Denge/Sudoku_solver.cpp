#include <bits/stdc++.h> 
bool isSafe(vector<vector<int>>& sudoku,int digit,int row,int col){
    int row_level= (row/3)* 3;
    int col_level= (col/3)* 3;
    
    for(int i=0;i<9;i++){
        if(sudoku[row][i]==digit || sudoku[i][col]==digit) return false;
        
        //sub- grid
        if(sudoku[row_level + i/3][col_level + i%3]==digit) return false;
    }
    return true;
}
bool solve(vector<vector<int>>& sudoku){
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            
            if(sudoku[i][j]==0){
                //calls 1-9 
                for(int digit=1;digit<=9;digit++){
                    //safe function 
                    if(isSafe(sudoku,digit,i,j)){
                        sudoku[i][j]=digit;
                        
                        if(solve(sudoku)){
                            return true;
                        }
                        else sudoku[i][j]=0;
                    }
                }
                //recursion  have tried all digits and noone of them gave true
                return false;
            }
        }
    }
    //destination case
    return true;
}
void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
}

//Time Complexity: O(9^N2)
//Space Complexity:O(1) 