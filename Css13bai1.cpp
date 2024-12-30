#include <stdio.h>
#define Max 100

int array[Max][Max];
void initArray(int row, int col);
void printArray(int row, int col);
int main() {
    int row, col;

    printf("Moi ban nhap gia tri hang va cot: ");
    scanf("%d%d", &row, &col);

    initArray(row, col);
    printArray(row, col);

    return 0;
}
void initArray(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}
void printArray(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

