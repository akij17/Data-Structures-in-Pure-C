//
// Created by Akshay on 10/27/2018.
//

#include "helpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearScreen(){
    for(int i = 0; i<1000; i++){
        printf("\n");
    }
}

void pressEnterKey(){
    printf("\n\nPress ENTER to continue");
    fflush(stdout);
    getchar();
    getchar();
}
