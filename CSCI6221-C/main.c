//
//  main.c
//  CSCI6221-C
//
//  Created by xsy on 10/2/18.
//  Copyright © 2018 xsy. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int* createHeap(int arrsize){
    return (int*)malloc(sizeof(int)*arrsize);
}

int* createStack(int arrsize){
    int arr[arrsize];
    
    return arr;
}

int main() {
    
    int arrSize;
    clock_t start, finish;
    double duration;

    //scanf("%d", &arrSize);
    
    //printf("%d\n",arrSize);

    int arrsize = 1000000;


    double start1 = clock();
    for(int i = 0;i < 2000000; i++){
        int* arr1 = createHeap(arrsize);
        //free(arr1);
    }
    double end1 = clock();
    printf("%f\n",end1-start1);

    double start2 = clock();
    for(int i = 0;i < 2000000; i++){
        int* arr2 = createStack(arrsize);
    }
    double end2 = clock();
    printf("%f\n",end2-start2);

}


