#include <stdio.h>
#include <stdlib.h>


// add.c; Implement a solution that takes the first two arguments 
//(argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 
int main(int argc, char *argv[]) {
     char *endptr;

     // Convert the arguments to double
    double num1 = strtod(argv[1], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "-Error- : '%s' is not a valid number.\n", argv[1]);
        return 1;
    }
    double num2 = strtod(argv[2], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "-Error- : '%s' is not a valid number.\n", argv[2]);
        return 1;
    }
    // Calculate the sum
    int sum = num1 + num2;

    // Print the result
    printf("%d\n",sum);

    return 0;
}
