/*
Delete array elements completely from array location.
Basically a shifting task.
*/
#include <stdio.h>
#include <malloc.h>

int main(){
    int *memory[17], data[] = {0,1,2,3,4,5,6,7,8,9,10,11,12}, item, *pointer; 
    /*
    here the array memory[15] denotes the memory &
    array data[] shows the data to be stored .
    */ 
    /*memory = (int **)malloc(15*sizeof(int **));  // alocating memory blocks 
    memory[2] = data; // assigning 
    // memory has been initialized now shifting task is to be done ;
    printf("%ls",memory[2]);
    printf("%ld",sizeof(int **)); */
    /*for(int i=2;i<17;i++){
        
        if((i>=2) && (i<=14)){
            memory[i] = data[i-2];
        }
        
    }*/
    /*for(int i=0;i<17;i++){
        printf("%d > ",memory[i]);
    }*/
    pointer = &data[0];
    memory[2] = pointer;

    printf("%d",*memory[2]);
    return 0;
}