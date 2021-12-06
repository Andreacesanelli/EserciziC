#include "quiz.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

        int a, b;
        if(argc != 3) {
printf("usage: test_driver <int_a> <int_b>\n")
exit(-1);
        }
        
a= atoi(argv[1]);
b= atoi(argv[2]);
if (a == 0) {
    printf("First argument must be positive\n")
exit(-2);
}
if (b == 0) {
    printf("2nd argument must be positive\n")
exit(-3);
}


printf("quiz(%i, %i) = i%\n", a, b, quiz(a, b);

}
