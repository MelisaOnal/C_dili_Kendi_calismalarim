
#include<stdio.h>

int main() {
    int sayi1 = 5, sayi2=10;
    
    int *ptr1 = &sayi1;
    int *ptr2 = &sayi2;
  
    printf("Before swap ptr1=%d, ptr2=%d\n",*ptr1,*ptr2);
    
    int *temp = ptr1;
    ptr1=ptr2;
    ptr2=temp;
    
    printf("Before swap ptr1=%d, ptr2=%d\n",*ptr1,*ptr2);
    
    return 0;
}
