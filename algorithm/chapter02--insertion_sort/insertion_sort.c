/*
* CopyRight By YK
* Data:2013/05/09
*/

#include "common.h"

/*
*    main idea:
*    1) i increases in order to traverse all the array.
*    2) j=i and tmp=array[i], j decreases , compares and insert tmp to proper position
*/

int insertion_sort(int *A, int len)
{
    int i, j;
    int tmp;    
    for (i = 1; i < len; i++) {
        tmp = A[i];

        for(j = i; j > 0; j--){
            if(tmp < A[j-1]){
                A[j] = A[j-1];
            }else{
                break;
            }
        }
        A[j] = tmp;
    }
    return 0;
}
