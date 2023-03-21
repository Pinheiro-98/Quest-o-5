#include <stdio.h>
#include <string.h>

int main(void) {
  char str[50];
  int i, len;

  printf("Digite uma palavra: ");
  scanf("%s", str);

  len = strlen(str);

  printf("farse invertida: ");

  for(i=len-1; i>=0; i--){
    printf("%c", str[i]);
  }
}