#include <stdio.h>

// Dizi boyutu
#define N 9


int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
 
        int mid = left + (right - left) / 2;

    // E�er ortadaki eleman aranan elemana e�itse, bulundu�u indis d�nd�r�l�r
        if (arr[mid] == x)
            return mid;

    // E�er ortadaki eleman aranan elemandan b�y�kse, sa� tarafta arama yap�l�r   
        if (arr[mid] > x)
            right = mid - 1;

     // E�er ortadaki eleman aranan elemandan k���kse, sol tarafta arama yap�l�r
        else
            left = mid + 1;
    }
    // Eleman bulunamazsa -1 d�nd�r�l�r
    return -1;
}


int main() {
 
    int dizi[]={4,8,3,84,47,76,9,24,68};
    

    int aranan = 47;

    int sonuc = binarySearch(dizi, 0, N-1, aranan);

    // Sonu� -1 ise eleman bulunamad��� belirtilir, aksi takdirde bulundu�u indis g�sterilir
    if (sonuc == -1)
        printf("Eleman bulunamadi.");
    else
        printf("Eleman %d indisinde bulundu.", sonuc);

    return 0;
}
