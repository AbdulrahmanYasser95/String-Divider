#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//char test[]={'h',' ','i','\n','\0'};
    //printf("%s",test);
    int T;
    int outStrIndx=0;
    scanf("%d\n",&T);
    if (0<T<11){
        char inS[10000];
        char outS[100030];
        for (int i;i<T;i++){
            //fgets(inS,10000,stdin);
            scanf("%s\n",inS);
            int inStrL=strlen(inS);
            if (2<=inStrL<=10000){
                //puts(inS);
                for (int inStrIndx=0;inStrIndx<inStrL;inStrIndx+=2){
                    if (inS[inStrIndx]!='\0'){
                        outS[outStrIndx]=inS[inStrIndx];
                        //printf("inStrIndx=%d\n",inStrIndx);
                        //printf("outStrIndx=%d\n",outStrIndx);
                        //printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                        outStrIndx++;
                        }
                }
                //outStrIndx++;
                outS[outStrIndx]=' ';
                //printf("outStrIndx=%d\n",outStrIndx);
                //printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                //outStrIndx++;
                //outS[outStrIndx]=' ';
                //printf("outStrIndx=%d\n",outStrIndx);
                //printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                outStrIndx++;
                for (int inStrIndx=1;inStrIndx<inStrL;inStrIndx+=2){
                    if (inS[inStrIndx]!='\0'){
                        outS[outStrIndx]=inS[inStrIndx];
                        //printf("inStrIndx=%d\n",inStrIndx);
                        //printf("outStrIndx=%d\n",outStrIndx);
                        //printf("outS[outStrIndx]=%c\n",outS[outStrIndx++]);
                        outStrIndx++;
                        }
                }
                //outStrIndx++;
                outS[outStrIndx]='\n';
                outStrIndx++;
            }
        }
        puts(outS);
    }
	return 0;
}
