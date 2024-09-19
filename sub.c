#include <stdio.h>
#include <stdlib.h>
//sub.c: Implement a solution that takes the first two arguments (argv[1] (a1), argv[2] (a2)) 
//and calculate a1-a2. At this point, assume the arguments are positive INTEGERS only, but note. The result can be negative. 
int main(int argc, char *argv[]){
   int num1 = atoi(argv[1]);
   int num2 = atoi(argv[2]);

   int sum = num1 - num2;

  printf("%d\n",sum);
  
  return 0;
}
