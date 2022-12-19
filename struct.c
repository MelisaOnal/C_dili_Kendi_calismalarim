#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct kitap {
    char kitapisim [20];
    int kitapfiyat;
    char kitapyazar [10];
    };
    
  int main (){
  struct kitap book;
  strcpy(book.kitapisim,"Denizin hayati");
  strcpy(book.kitapyazar,"Melisa");
  book.kitapfiyat=500;
  printf(" kitapisim %s\n kitapyazar %s\n kitapfiyat %d",book.kitapisim, book.kitapyazar, book.kitapfiyat);
  }
