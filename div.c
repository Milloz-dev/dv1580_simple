#include <stdio.h>
#include <stdlib.h>
//div.c: Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) and calculate a1/a2.
// Here, verify that the arguments are real numbers; see [2] for examples of how to do this. If a2 equals 0,
// do not do the calculation but print "DIV ZERO NOT ALLOWED!\n". 
int main(int argc, char *argv[]){
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
     if (num2 == 0) {
        fprintf(stderr, "DIV ZERO NOT ALLOWED!\n");
        return 1;
    }

    int sum = num1 / num2;

    printf("%d\n",sum);

  return 0;
}
