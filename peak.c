#include <stdio.h>

// a peak is a value strictly greater than all of its neighbours
//this program counts the number of peaks and prints it's coordinates eg: (1,1)

#define MAXN 100
#define MAXM 100

int N, M;
int grid[MAXN][MAXM];

//Returns 1 if the cell at (r, c) is a peak, 0 otherwise.

int is_peak(int row, int col) {

    // defining the 8 directions (North, South, East, West, NW, NE, SW, SE)
    int dr[8] = {-1,-1,-1,0,0,1,1,1};
    int dc[8] = {-1,0,1,-1,1,-1,0,1};

    for(int i = 0; i < 8; i++) {
        int nr = row + dr[i];
        int nc = col + dc[i];

        if(nr >= 0 && nr < N && nc >= 0 && nc < M) {
            if(grid[row][col] <= grid[nr][nc]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    if (scanf("%d %d", &N, &M) != 2) {
        return 1;
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Iterate over every cell (i, j) in the grid.
    // If is_peak(i, j) is true, store the coordinates.
    // You can use two arrays like peak_r[MAXN*MAXM] and peak_c[MAXN*MAXM] 

    int peak_r[MAXN*MAXM];
    int peak_c[MAXN*MAXM];
    int count = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(is_peak(i,j)) {
                peak_r[count] = i;
                peak_c[count] = j;
                count++;
            }
        }
    } 

    //Print the total count of peaks.
    printf("%d\n", count);

    //Print each stored (row, col) pair.
    for(int i = 0; i < count; i++) {
        printf("%d %d\n", peak_r[i], peak_c[i]);
    } 

    return 0;
}