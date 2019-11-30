//Phakhawadee Suwannan 593021273-3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpsource, *fpdest;
    char source[20], dest[20], c;
    char * line = NULL;
    size_t len = 0;
    size_t read;

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

    while ((read = getline(&line, &len, fpsource)) != -1) {
        fprintf(fpdest, "%s", line);
    }

    fclose(fpsource);
    fclose(fpdest);
    if (line)
        free(line);

    return 0;
}
