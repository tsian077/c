#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
 FILE *fptr;
 char name[20];
 int score;
 fptr=fopen("score.dat", "w");
 printf("�п�J�m�W: ");
 scanf("%s", name);
 printf("�п�J����: ");
 scanf("%d", &score);
 while (score != -100) {
 fprintf(fptr,"%s %d", name, score);
 printf("�п�J�m�W: ");
 scanf("%s", name);
 printf("�п�J����: ");
 scanf("%d", &score);  
 }
 fclose(fptr);
 fptr=fopen("score.dat", "r");
 printf("\n�H�U�O�z��J�����:\n");
 while (fscanf(fptr,"%s %d", name, &score) !=EOF)
 printf("%-10s %3d\n", name, score);
 system("PAUSE");
 return 0;
}
