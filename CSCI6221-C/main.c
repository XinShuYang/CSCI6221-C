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
    
    for(int i=0;i<2000000;i++){
    
    start = clock();
    int *dynArr = (int *)malloc(sizeof(int)*arrSize);
    finish = clock();
    duration = finish-start;
    printf("%f heap \n",duration);
        
    start = clock();
    int arr1[arrSize];
    finish = clock();
    duration = finish-start;
    printf("%f stack \n",duration);
    }
    return 0;
}
