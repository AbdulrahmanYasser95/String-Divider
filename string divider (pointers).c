#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
void prepareStr(int T);

int main() {
  char *T_endptr;
  char *T_str = readline();
  int T = strtol(T_str, &T_endptr, 10);

  if (T_endptr == T_str || *T_endptr != '\0') {
    exit(EXIT_FAILURE);
  }
  if((1<=T)&(T<=10)){
      prepareStr(T);
      //printf("%s", out);
  }
}

char *readline() {
  size_t alloc_length = 1024;
  size_t data_length = 0;
  char *data = malloc(alloc_length);

  while (true) {
    char *cursor = data + data_length;
    char *line = fgets(cursor, alloc_length - data_length, stdin);

    if (!line) {
      break;
    }

    data_length += strlen(cursor);

    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
      break;
    }

    size_t new_length = alloc_length << 1;
    data = realloc(data, new_length);

    if (!data) {
      break;
    }

    alloc_length = new_length;
  }

  if (data[data_length - 1] == '\n') {
    data[data_length - 1] = '\0';
  }

  data = realloc(data, data_length);

  return data;
}

void prepareStr(int T){
  for (int i = 0; i < T; i++) {
    char *inS = readline();
    int inS_length = strlen(inS);
    size_t outS_alloc_length = 1024;
    size_t outS_length = 0;
    char *outS = malloc(outS_alloc_length);

    while (true) {
      char *cursor = outS + outS_length;
      for (int inStrIndx = 0; inStrIndx < inS_length; inStrIndx += 2) {
        if ((inS[inStrIndx] != '\0') || (inS[inStrIndx] != '\n')) {
          //printf("%c\n", inS[inStrIndx]);
          *cursor = inS[inStrIndx];
          //printf("%s\n",cursor);
          //printf("%s\n",outS);
          cursor++;
        }
      }
      *cursor = ' ';
      cursor++;
      //printf("%s\n", outS);
      // char *c = fgets(cursor, alloc_length - data_length, stdin);

      /*if (!line) {
        break;
      }*/
      for (int inStrIndx = 1; inStrIndx < inS_length; inStrIndx += 2) {
        if ((inS[inStrIndx] != '\0') || (inS[inStrIndx] != '\n')) {
          *cursor = inS[inStrIndx];
          cursor++;
          //printf("%s\n", outS);
        }
      }
      *cursor = '\n';
      cursor++;

      outS_length += strlen(outS);
      //printf("outS_length 1: %ld\n", outS_length);

      if (outS_length < outS_alloc_length - 1) {
        //printf("%s (breaking)\n", outS);
        break;
      }
      //printf("%s (after addition)\n", outS);

      size_t new_length = outS_alloc_length << 1;
      outS = realloc(outS, new_length);

      if (!outS) {
        break;
      }

      outS_alloc_length = new_length;
    }

    if (outS[outS_length - 1] == '\n') {
      outS[outS_length - 1] = '\0';
      //printf("%s (after break 1)\n", outS);
    }
    //printf("%ld\n", outS_length);
    if ((0<outS_length)&&(outS_length<10000)){
        printf("%s\n", outS);
    }

    outS = realloc(outS, outS_length);
  }
  //return outS;
}
