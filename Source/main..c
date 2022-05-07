#include <stdio.h>

// include user library
#include "..\Header\Calculate.h"
#include "..\Header\Convert.h"


void main(){
    printf("=============================calculate.c===================================");
    int arr_1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 ,20};
    int arr_2[20] = {12, 3, 43, 65, 76, 34, 87, 98, 10, 92, 76, 35, 26, 95, 42, 63, 86, 41, 14, 15};
    int sum_arr = sum_of_arr(arr_2, 20);
    int max_arr = max_of_arr(arr_2, 20);
    int min_arr = min_of_arr(arr_2, 20);
    printf("sum of array: %d", sum_arr);
    printf("max of array: %d", max_arr);
    printf("min of array: %d", min_arr);
    printf("\n=============================end_calculate===============================");
    printf("\n=============================convert.c===================================");
    DecimalToBinary(7);
    DecimalToHex(11);
    printf("\n=============================end_convert=================================");
}
