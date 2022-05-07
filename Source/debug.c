#include <stdio.h>

int arr_1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 ,20};
int arr_2[20] = {12, 3, 43, 65, 76, 34, 87, 98, 10, 92, 76, 35, 26, 95, 42, 63, 86, 41, 14, 15};

// int sum_of_arr(int Arr[], int length_arr)
// {
//     int sum = 0;
//     for(int i =  0; i < length_arr; i++)
//     {
//         sum += Arr[i];
//     }
//     return sum;
// }

// void merge(int arr[], int l, int m, int r)
// {
//     int i, j, k;
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (i = 0; i < n1; i++)
//     L[i] = arr[l + i];
//     for (j = 0; j < n2; j++)
//     R[j] = arr[m + 1+ j];
//     i = 0;
//     j = 0;
//     k = l;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = l+(r-l)/2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m+1, r);
//         merge(arr, l, m, r);
//     }
// }

// int min_of_arr(int Arr[], int length_arr)
// {
//     mergeSort(Arr, 0, length_arr - 1);
//     return Arr[0];
// }

// int max_of_arr(int Arr[], int length_arr)
// {
//     mergeSort(Arr, 0, length_arr - 1);
//     return Arr[length_arr - 1];
// }

void DecimalToBinary(int num)
{
    long long binary = 0;
    int rem, tmp = 1;
    while(num != 0)
    {
        rem = num % 2;
        num /= 2;
        binary += rem * tmp;
        tmp *= 10;
    }
    printf("ob%lld",binary);
}

void DecimalToHex(int num)
{
    char hexnum[100];
    int i = 1;
    while( num != 0)
    {
        int tmp = num % 16;
        if (tmp < 10)
        {
            tmp = tmp + 48;
        }
        else
        {
            tmp = tmp + 55;
        }
        hexnum[i++] = tmp;
        num = num / 16;
    }
    printf("\n0x");
    for (int j = i -1; j > 0; j--)
    {
        printf("%c",hexnum[j]);
    }
}

int main()
{
    // int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
    // int arr_size = sizeof(arr)/sizeof(arr[0]);
    // mergeSort(arr_2, 0, 20 - 1);
    // int max = max_of_arr(arr_2, 20);
    // int min = min_of_arr(arr_2, 20);
    // printf("max of array is %d", max);
    // printf("\nmin of array is %d", min);
    DecimalToBinary(7);
    DecimalToHex(11);
    return 0;
}