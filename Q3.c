#include<stdio.h>
#include<stdlib.h>
void main()
{
    //Initialize the array
    int *array;
    int i,j;
    int size;
    int delete;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    array = (int *)calloc(size,sizeof(int));
    printf("Enter elements of array\n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);
    printf("Elements are: ");
    for(i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n");
    delete = array[3];
    for(i=0; i<size; i++){
        if(array[i] == delete){
            for(j=i; j<size; j++){
                array[j] = array[j+1];
            }
        }
    }
    //array = realloc(array, (size-1)*sizeof(int));
    printf("\nAfter deletion the array is:");
    for(i=0; i<size-1; i++)
        printf("%d ", array[i]);
    free(array);
}
