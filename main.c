#include <stdio.h>

int main() {
    int i[10], j; //i bir dizi 10 elemanlı
    i[0]=45;
    int *iptr;// iptr bir pointer
    for(j=1;j<11;j++) //1 dan 11 a kadar j artıcak
        i[j]=j; // j nin degeri i ye dizi elamını olarak kayıt olucak
    iptr=i; //dizinin ilk elemanı aynı zamanda pointerinda ilk elemanı
    printf("iptr=%d\n", *iptr);

    for(j=1;j<11;j++){
        printf("%d\t", *iptr); //pointerin gösterdiği degerleri yazdırcak
        //son indisi yazdırıcak 1 artıcak
        iptr++; //
    }
    printf("\n%d\n", *(iptr-1)); // son indisi gösteriyor

    iptr=i; //diziyi iptr ye atıyor ve dizinin başlangıç adresi ve iptr adresi aynı. iptr 1.elamını gösteriyor
    for(j=0;j<10;j++)
        printf("%d\t", *(iptr+j));//iptr ilk degerin adresini tutuyor 1.indisin içindekini yazdır ve artırarak devam et
    printf("\n%d", *iptr);
    getchar();
    return 0;
}