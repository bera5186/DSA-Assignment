#include <stdio.h>
#include <malloc.h>

int main(){
    int *memory, data[] = {0,1,2,3,4,5,6,7,8,9,10,11,12}, item, *pointer; 
    memory = (int *)malloc(17*sizeof(int));

    for(int i=2;i<17;i++){
        *(memory + i) = &data[i-2];
    }

    /*for(int i=0;i<17;i++){
        printf("%d > ",*(memory+i);
    }*/
    printf("%d",*(memory+2);

    
    return 0;
}