#include <stdio.h>
#include <stdlib.h>


// add.c; Implement a solution that takes the first two arguments 
//(argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 
int main(int argc, char *argv[]) {
     char *endptr;

        // Convert the first argument and check for other than number
    long num1 = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0') {
        printf("ERROR: '%s' is not a valid number.\n", argv[1]);
        return 1;
    }

    long num2 = strtol(argv[2], &endptr, 10);
    if (*endptr != '\0') {
        printf("ERROR: '%s' is not a valid number.\n", argv[2]);
        return 1;
    }
    // Calculate the sum
    int sum = num1 + num2;

    // Print the result
    printf("%d\n",sum);

    return 0;
}
