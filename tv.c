#include <stdio.h> 

// The 1's represent the TV's border, the 2's represent the actual screen. 
// The three in the lower right corner are the power buttons.
//(When 3 is entered the program should output the number of rows and columns.
int main() {
    int nums[100];
    int length = 0, width = 0;
    int num, i = 0;
    
    while (1) {
        scanf("%d", &num);
        nums[i++] = num;
        if (num == 3) {
            break;
        }
    }
    
    for (int j = 0; j < i; j++) {
        if (nums[j] == 2) {
            length = j - 1;
            break;
        }
    }
    
    width = i / length;
    
    printf("%d %d\n", width, length);
    
    return 0;
}
