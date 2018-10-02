//
//  main.c
//  CSCI6221-C
//
//  Created by xsy on 10/2/18.
//  Copyright © 2018 xsy. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

int main() {
    
    int arrSize;
    
    scanf("%d", &arrSize);
    
    printf("%d\n",arrSize);
    
    int *dynArr = (int *)malloc(sizeof(int)*arrSize);
    
    int arr1[arrSize];
    
    return 0;
}
