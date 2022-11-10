#include <stdio.h>
#include "array.h"
#include "../word/word.h"

int main()
{
    List L;
    createList(&L);
    if (isEmpty(L)) {
        printf("List kosong\n");
    }
    ElType test, test1;
    test = stringToWord("hai");
    test1 = stringToWord("halo");
    if (isElTypeEqual(test, test1)) {
        printf("Sama\n");
    } else {
        printf("Tidak sama\n");
    }
    insertFirst(&L, test);
    printf("%d\n", length(L));
    if (isFull(L)) {
        printf("List penuh\n");
    } else {
        printf("List tidak penuh\n");
    }
    insertLast(&L, test1);
    printf("%d\n", L.capacity);
    updateCapacity(&L);
    printf("%d\n", L.capacity);
    test = getElmt(L, 1);
    printWord(test);
    printf("\n");
    deleteLast(&L);
    displayList(L);
    deallocateList(&L);
    printf("%d\n", L.capacity);
    displayList(L);
    return 0;
}

// compile: gcc ADT/list/driverArray.c ADT/list/array.c ADT/word/word.c Misc/ascii/ascii.c -o driver