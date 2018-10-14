/*
Find given numbers in a given array in O(n) complexity.
*/
#include <stdio.h>

int main(){
    int flag1,flag2,a[]= {20, 15, 25, 2, 30, 95, 41, 68, 4, 39};

    flag1=flag2=0; // counter variables

    for(int i=0; i<10; i++){  // only 1 for loop is used therefore complexity : O(n)
        if(a[i] == 41){
            printf("41 Found at %dth position\n",i+1);
            flag1 = flag1 +1;
        }
        if(a[i] == 65){
            printf("65 found at %dth position\n",i+1);
            flag2 = flag2 +1;
        }
    }
    if(flag1 == 0){
        printf("41 not found\n"); 
    }
    if(flag2 == 0){
        printf("62 not found\n"); 
    }
    return 0;
}