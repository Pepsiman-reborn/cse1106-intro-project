#include <stdio.h>
//Daniel Hernandez, 1002349532
int main()
{
    int A[5][5];
    int i, j;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            A[i][j]=i+j;
        }
    }
   
    printf("The 5X5 array is :\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (i = 0; i < 5; i++) {
    for (j = i + 1; j < 5; j++) {
        sum += A[i][j];
    }
}

    printf("Sum of diagonal elements in the array = %d\n", sum);

    return 0;
}