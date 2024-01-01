#include "cgc.h"
#include <stdio.h>
#include <string.h>

typedef struct {
    int a;
    double b;
} SampleStruct;

int main() {
    printf("Starting memory allocation tests...\n");

    // Test 1: Allocate a simple integer
    int *testInt = smart_malloc(sizeof(int));
    *testInt = 123;
    printf("Test 1: Allocated int with value %d\n", *testInt);

    // Test 2: Allocate an array of integers
    int *testArray = smart_malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        testArray[i] = i * i;
    }
    printf("Test 2: Allocated int array with values: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", testArray[i]);
    }
    printf("\n");

    // Test 3: Allocate a struct
    SampleStruct *testStruct = smart_malloc(sizeof(SampleStruct));
    testStruct->a = 42;
    testStruct->b = 3.14;
    printf("Test 3: Allocated struct with values: a = %d, b = %f\n", testStruct->a, testStruct->b);

    // Test 4: Allocate and copy a string
    char *testString = smart_malloc(50 * sizeof(char));
    strcpy(testString, "Hello, smart malloc!");
    printf("Test 4: Allocated and copied string: %s\n", testString);

    // Free all allocated memory
    printf("Freeing all allocated memory...\n");
    smart_free();

    printf("Memory management tests completed.\n");
    return 0;
}
