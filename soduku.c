#include <stdio.h>

#define N 9

void print_sudoku(int arr[N][N]){
    int counter = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", arr[i][j]);
            counter++;
            if(counter % 3 ==0){
                printf(" | ");
            }
            if(counter % 27 ==0){
                printf("\n--------------------------");
            }
        }
        printf("\n");
    }
}
int insert_sudoku(){
    int board[N][N];
    int i, y;
    
    for (i = 0; i < N; i++){
        for (y = 0; y < N; y++){
            printf("Insert grid %d, digit %d: ", i, y);
            if (scanf("%d", &board[i][y]) != 1){
                board[i][y] = 0;
            };
        }
    }
    return 0;
}
int main(){

    int board[N][N] = {{2, 0, 0, 0, 0, 0, 6, 9, 0},
                    {0, 5, 0, 0, 0, 3, 0, 0, 0}, 
                    {1, 7, 0, 0, 0, 9, 4, 0, 5}, 
                    {0, 0, 3, 0, 2, 5, 0, 1, 8},
                    {0, 0, 0, 0, 4, 0, 0, 0, 0},
                    {7, 2, 0, 3, 8, 0, 5, 0, 0},
                    {5, 0, 2, 6, 0, 0, 0, 4, 1},
                    {0, 0, 0, 5, 0, 0, 0, 7, 0},
                    {0, 6, 7, 0, 0, 0, 0, 0, 3}};
    print_sudoku(board);
}

void row_check(int arr[N][N], int row, int num){
    int col = 0;
    for(col = 0; col < N; col++){
        if(arr[row][col] == num){
            return true;
        }else{
            return false;
        }

    }
    

}

int columncheck(int arr[N][N], int col, int num){
    int row = 0;
    for(row = 0; row < N; row++){
        if(arr[row][col] == num){
            return true;
        }else{
            return false;
        }
    }
}
