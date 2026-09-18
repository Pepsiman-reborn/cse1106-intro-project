#include <stdio.h>
//Daniel Hernandez, 1002349532
int main()
{
    int size, e;
    printf("Please enter size of the array: ");
    scanf("%d", &size);
    
    printf("Please enter the elements in the array: ");
    int array[size];
    for (e = 0; e < size; e++) {
        scanf("%d", &array[e]);
    }

    int max = array[0];
    int min = array[0];

    for (e = 0; e < size; e++) {
        if (array[e] > max)
            max = array[e];

        if (array[e] < min)
            min = array[e];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
