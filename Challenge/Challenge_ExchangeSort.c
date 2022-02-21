#include <stdio.h>

void sort( int [], int );

void sort(int a[], int elements)
{
    int i, j, temp;

    i = 0;
    while( i < (elements - 1) ) {
        j = i + 1;
        while( j < elements ) {
            if( a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int numbers[] = {23, 65, 30, 8, 33, 24, 76, 7};
    int loop;

    sort( numbers, 8 );
    printf("Sorted array: \n");
    for( loop = 0; loop < 8; loop++ )
        printf("%d ", numbers[loop]);
    return 0;
}

//reference: www.cems.uwe.ac.uk/~irjohnso/courses/coursenotes/uqc146/cprogram/c_052a.htm
