/* libraries */
#include <stdio.h>

/* function using the euclidean algorithm to get the largest common factor */
int largest_c_factor (int num_1, int num_2) {
    if (num_2 == 0){
        return num_1;
    }
    else {
        return largest_c_factor(num_2, num_1 % num_2);
    }
}

/* main function */
int main () {
    int int_1, int_2, smallest_common_multiple, largest_common_factor;
    /* takes input */
    scanf("%d" "%d", &int_1, &int_2);
    largest_common_factor = largest_c_factor (int_1,int_2);
    /* works out the smallest common multiple */
    smallest_common_multiple = (int_1 * int_2) / largest_common_factor;
    printf("%d " "%d",largest_common_factor, smallest_common_multiple);
    return 0;
}