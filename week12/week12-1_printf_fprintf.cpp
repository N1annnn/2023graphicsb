#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt","w"); ///w=Write;
    printf("Hello World\n");
    fprintf(fout,"Hello World�b�ɮ׸�\n");
}
