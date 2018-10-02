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

int main() {
    
    int arrSize;
    clock_t start, finish;
    double duration;

    scanf("%d", &arrSize);
    
    printf("%d\n",arrSize);

    int arrsize = 100000;


    start1 = clock();
    for(int i = 0;i < 2000000; i++){
        int* arr1 = createHeap(arrsize);
    }
    end1 = clock()
    printf("%f\n",end1 - starat1);

    start2 = clock();
    for(int i = 0;i < 2000000; i++){
    }
    end2 = clock();
    printf("%f\n",end2 - start2);

}

int* createHeap(int arrsize){
    int* arr = (int*)malloc(sizeof(int)*arrsize);
    return arr;
}

int* createStack(int arrsize){
    int arr[arrsize];

    return arr;
}
