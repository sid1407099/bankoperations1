/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief Multifile program
 * @version 0.1
 * @date 2021-09-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include<stdio.h>
 #include"feature.h"
 #include "feature.c"
 #include "test.c"
 

 //extern void test();

int main(){
    int result=feature();
    printf("%d\n",result);

      test();



    return 0;
}
