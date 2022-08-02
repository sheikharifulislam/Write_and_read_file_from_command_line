#include <stdio.h>
#include <string.h>


int main() {
    FILE *fp;
    char fileName[20];
    char body[100];
    printf("Enter Your File Name: ");
    scanf("%s",&fileName);
    fp = fopen(fileName, "w");
    printf("Enter Your File Text: ");
    scanf(" %[^\n]s",&body);
    fprintf(fp,body);
    fclose(fp);
    system("cls");
    printf("Succefully Write and Read File\n");
    printf("File Data: ");
    printf("%s",body);


    return 0;
}
