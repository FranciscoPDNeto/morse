#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "morse.h"

int main(int argc, char const *argv[]) {
  char morse[] = ".- -... -.-. -.. . ..-. --. / .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..";
  //morse = malloc(32*sizeof(char));
  //strcpy(morse,".--- .--- .--- .--- .--- .--- .--- .---"); DA ERRO COLOCA UN CHARACTER ALEATORIO DO NADA
  char* text;
  text = morse_to_text(morse);
  //morse = text_to_morse(text);
  printf("%s\n",text);
  return 0;
}
