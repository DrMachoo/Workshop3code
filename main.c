#include <stdio.h>
#include <stdlib.h>

void Merge(int L[], int start, int end, int mid);
void MergeSort(int L[], int start, int end);
void printList(int L[], int size);

int main(void){
    int L[] = { 5, 3, 8, 1, 6, 10, 7, 2, 4, 9 };
    int L_size = sizeof(L) / sizeof(L[0]);

    printf("Given list \n");
    printList(L, L_size);

    MergeSort(L, 0, L_size - 1);

    printf("The sorted list \n");
    printList(L, L_size);
    return 0;
}

void Merge(int L[], int start, int end, int mid){
    /*Here goes your code*/
    /*'
        * procedure Merge(L, l, m, r)
        L1 = L[l, l + 1, . . . , m]
        L2 = L[m + 1, m + 2, . . . , r]
        i = 0
        j = 0
        while i < m − l + 1 and j < r − m do
        if L1[i] ≤ L2[j] then
        L[l + i + j] = L1[i]
        i = i + 1
        else L[l + i + j] = L2[j]
        j = j + 1
        if i = m − l + 1 then
        for k = j . . . r − m − 1 do
        L[l + i + k] = L2[k]
        else
        for k = i . . . m − l do
        L[l + j + k] = L1[k]
        return L
     */



}

void MergeSort(int L[], int start, int end){
    /*Here goes your code as well*/

    /*
       * procedure Mergesort(L = (a0, a1, . . . , an−1), l, r)
      if l < r then
      m =
      
      r+l
      2
      
      Mergesort(L, l, m)
      Mergesort(L, m + 1, r)
      L = Merge(L, l, m, r)
      return L
     */


}

void printList(int L[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", L[i]);
    printf("\n");
}