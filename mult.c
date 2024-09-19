#include <stdio.h>
#include <stdlib.h>
//mult.c: Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2))
// and calculate a1*a2. Here, verify that the arguments are real numbers; see [2] for examples of how to do this. 
int main(int argc, char *argv[]){
char *endptr;
    
    // Convert the arguments to double
    double num1 = strtod(argv[1], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: '%s' is not a valid number.\n", argv[1]);
        return 1;
    }
    double num2 = strtod(argv[2], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: '%s' is not a valid number.\n", argv[2]);
        return 1;
    }
    // Calculate the product
    double product = num1 * num2;

    // Print only the product
    printf("%f\n", product);

    return 0;
}
