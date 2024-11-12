#include <stdio.h>
#include "math.h"
#include <stdlib.h>
// L = liste
// l = start
// r = end

void Merge(int L[], int l, int r, int mid);
void MergeSort(int L[], int l, int r);
void printList(int L[], int size);
int count = 0;

int main(void){
    int L[] = { 5, 3, 8, 1,6, 10, 7, 2, 4, 9};
    int L_size = sizeof(L) / sizeof(L[0]);

    printf("Given list \n");
    printList(L, L_size);

    MergeSort(L, 0, L_size - 1);

    printf("The sorted list \n");
    printList(L, L_size);

    printf("count = %d", count);
    return 0;
}

void Merge(int L[], int l, int r, int mid){
    /*Here goes your code*/
    int L1_size = mid+1;
    int L2_size = r-mid;
    int L1[L1_size];
    int L2[L2_size];


    for (int i = 0; i < L1_size; i++) {
        L1[i] = L[l + i];
    }
    for (int i = 0, j = mid + 1; j <= r; i++, j++) {
        L2[i] = L[j];
    }

    /*'
        * procedure Merge(L, l, m, r)

        L1 = L[l, l + 1, . . . , m]
        L2 = L[m + 1, m + 2, . . . , r]

        */

    int i = 0;
    int j = 0;
    while (i < mid-l+1 && j < r-mid) {
        if (L1[i] <= L2[j]) {
            L[l+i+j] = L1[i];
            i++;
        } else {
            L[l + i + j] = L2[j];
            j = j + 1;
        }

    }
    /*
        i = 0
        j = 0
        while i < m − l + 1 and j < r − m do
        if L1[i] ≤ L2[j] then
        L[l + i + j] = L1[i]
        i = i + 1
        else L[l + i + j] = L2[j]
        j = j + 1


        */
    if (i==mid-l+1) {
        for (int k = j; k <= r - mid - 1; k++) {
            L[l + i + k] = L2[k];
        }
    } else {
        for (int k = i; k <= mid - l; k++) {
            L[l + j + k] = L1[k];
        }
    }
    /*
        if i = m − l + 1 then
        for k = j . . . r − m − 1 do
        L[l + i + k] = L2[k]
        else
        for k = i . . . m − l do
        L[l + j + k] = L1[k]
        return L
     */



}

void MergeSort(int L[], int l, int r){
    /*Here goes your code as well*/
    count++;
    if (l < r) {
        int m = (r + l) / 2;
        MergeSort(L, l, m);
        MergeSort(L, m+1, r);
        Merge(L,l,r,m);
       /* m =

r+l
2

Mergesort(L, l, m)
Mergesort(L, m + 1, r)
L = Merge(L, l, m, r) */
    }

    /*
       * procedure Mergesort(L = (a0, a1, . . . , an−1), l, r)
      if l < r then

      return L
     */


}

void printList(int L[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", L[i]);
    printf("\n");
}