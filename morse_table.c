#include <stdlib.h>
#include <string.h>

#include "morse_table.h"

char* morse_to_char(char* morse){
  if(!strcmp(morse,".-"))        return "a";
  else if(!strcmp(morse,"-...")) return "b";
  else if(!strcmp(morse,"-.-.")) return "c";
  else if(!strcmp(morse,"-.."))  return "d";
  else if(!strcmp(morse,"."))    return "e";
  else if(!strcmp(morse,"..-.")) return "f";
  else if(!strcmp(morse,"--."))  return "g";
  else if(!strcmp(morse,"....")) return "h";
  else if(!strcmp(morse,".."))   return "i";
  else if(!strcmp(morse,".---")) return "j";
  else if(!strcmp(morse,"-.-"))  return "k";
  else if(!strcmp(morse,".-..")) return "l";
  else if(!strcmp(morse,"--"))   return "m";
  else if(!strcmp(morse,"-."))   return "n";
  else if(!strcmp(morse,"---"))  return "o";
  else if(!strcmp(morse,".--.")) return "p";
  else if(!strcmp(morse,"--.-")) return "q";
  else if(!strcmp(morse,".-."))  return "r";
  else if(!strcmp(morse,"..."))  return "s";
  else if(!strcmp(morse,"-"))    return "t";
  else if(!strcmp(morse,"..-"))  return "u";
  else if(!strcmp(morse,"...-")) return "v";
  else if(!strcmp(morse,".--"))  return "w";
  else if(!strcmp(morse,"-..-")) return "x";
  else if(!strcmp(morse,"-.--")) return "y";
  else if(!strcmp(morse,"--..")) return "z";
  else if(!strcmp(morse,".----"))return "1";
  else if(!strcmp(morse,"..---"))return "2";
  else if(!strcmp(morse,"...--"))return "3";
  else if(!strcmp(morse,"....-"))return "4";
  else if(!strcmp(morse,"....."))return "5";
  else if(!strcmp(morse,"-...."))return "6";
  else if(!strcmp(morse,"--..."))return "7";
  else if(!strcmp(morse,"---.."))return "8";
  else if(!strcmp(morse,"----."))return "9";
  else if(!strcmp(morse,"-----"))return "0";
  else if(!strcmp(morse,"/"))    return "/";
  else if(!strcmp(morse,"!"))    return " ";
  else return NULL;
}
