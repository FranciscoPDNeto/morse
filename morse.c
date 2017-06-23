#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "morse.h"
#include "morse_table.h"

//separar as letras por espaço e separar palavas por barra na entrada

char* morse_to_text(char* morse){
  int len;
  char *espaco;
  espaco = malloc(sizeof(char));
  strcpy(espaco," ");
  int i;
  int max_size = 16;
  char *aux;                      //  aux para partir uma letra
  char *aux_text;                 //  aux para cada palavra
  char *letra;
  len = strlen(morse);
  aux_text = calloc(max_size,sizeof(char));
  aux = strtok(morse," ");
  while(aux != NULL){
    printf("%s\n",aux );          // SE TIRAR TA DANDO ERRO WTFFFFF
    letra = morse_to_char(aux);   //transforma o codigo em letra
    len = strlen(aux_text);       //tamanho da palavra sendo lida
    if (len >= max_size) {        //teste se prencheu minha string
      char *tmp = malloc(max_size*sizeof(char));
      strcpy(tmp,aux_text);
      free(aux_text);
      max_size = max_size*2;
      aux_text = malloc(max_size*sizeof(char));
      aux_text = tmp;
    }
    if (!strcmp(aux,"/")) {        //coloca espaço para pular palavra;
      strcat(aux_text,espaco);
    }
    if(strcmp(letra,"/")){
      strcat(aux_text,letra);
    }
    aux = strtok(NULL," ");       //ler proxima letra
  }
  return aux_text;
}

char* text_to_morse(char* text){

}
