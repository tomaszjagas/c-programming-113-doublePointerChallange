#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr) {
    *ptr = (int *) malloc(sizeof(int)); // allocate some memory
}

int main() {
    int num = 123;
    int *singlePointer = NULL;
    int **doublePointer = NULL;

    singlePointer = &num;
    doublePointer = &singlePointer;

    printf("Value of num is: %d\n", num);
    printf("Value of num using singlePointer is: %d\n", *singlePointer);
    printf("Value of num using doublePointer is: %d\n\n", **doublePointer);

    printf("Address of num is: %p\n", &num);
    printf("Address of num using singlePointer is: %p\n", singlePointer);
    printf("Address of num using doublePointer is: %p\n\n", *doublePointer);

    printf("Value of singlePointer is: %p\n", singlePointer);
    printf("Value of singlePointer using doublePointer is: %p\n\n", *doublePointer);

    printf("Address of singlePointer is: %p\n", &singlePointer);
    printf("Address of singlePointer using doublePointer is: %p\n\n", doublePointer);

    printf("Value of doublePointer is: %p\n", doublePointer);
    printf("Address of doublePointer is: %p\n\n", &doublePointer);

    int *ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 20;
    printf("%d\n", *ptr);

    // free up the memory
    free(ptr);

    return 0;
}