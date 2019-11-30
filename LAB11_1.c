
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Phakhawadee Suwanna
int main()
{
    FILE *fpsource, *fpdest;
    char source[20], dest[20],c;

    printf("Enter source file name : ");
    scanf("%s", source);
    printf("Enter destination file name : ");
    scanf("%s", dest);

    fpsource = fopen(source, "r");
    fpdest = fopen(dest, "w");
    if(fpsource == NULL)  {
        printf("No source file...");
        exit(-1);
    }

    do {
        c = fgetc(fpsource);
        if( feof(fpsource) ) {
            break;
      }
        fputc(c, fpdest);

      fputc('\n', fpdest);
    } while(1);

    fclose(fpsource);
    fclose(fpdest);

    return 0;
}
