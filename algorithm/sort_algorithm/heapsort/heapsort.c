
/*
* CopyRight By YK
* Data:2013/05/09
*/

#include "heapsort.h"
#include "common.h"

void swap(int *a, int *b)
{
    int tmp ;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void max_heapify(int *array, int array_len, unsigned int i)
{
    int max;
      
    max = i;

    if(2*i <= array_len && array[2*i] > *(array +i))/*2*i<=*/
        max = 2*i;
    if (2*i+1 <= array_len && array[2*i+1] > *(array+max))
        max = 2*i + 1;
    if (max != i){
        swap(array+max, array+i);
        max_heapify(array,array_len,max);
    }

}

void build_heap(int *array, int len)
{
    int i;
    for (i = len / 2; i > 0; i--) {
        max_heapify(array,len,i);
    }
}    
    

void heapsort(int *array,int array_len)
{
    int i,tmplen;

    
    build_heap(array,array_len);
    
    for(tmplen = array_len ; tmplen > 0; i++){//tmplen > 0 not >=0
        swap(array+1, array + tmplen);//array+1
        tmplen--;
        max_heapify(array,tmplen,1);//array+1 and tmplen
    }
}