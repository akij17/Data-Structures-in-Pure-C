#include <stdio.h>
#include "arraylist.h"
#include "liststructures.h"

int main() {
    printf(
            "What will you like to test?\n"
            "1) List Structures\n"
            "Enter your selection: "
            );
    int x; scanf("%d", &x);
    switch(x){
        case 1: listMenu();
        break;

    }
    return 0;
}
