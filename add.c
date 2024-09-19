#include <stdio.h>
#include <stdlib.h>


// add.c; Implement a solution that takes the first two arguments 
//(argv[1], argv[2]) and adds them together. At this point, assume the arguments are positive INTEGERS only. 
int main(int argc, char *argv[]) {
    // Convert arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate the sum
    int sum = num1 + num2;

    // Print the result
    printf("%d\n",sum);

    return 0;
}
