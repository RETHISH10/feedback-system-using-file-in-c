#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("file openning failed\n");
return 0;
}
fprintf(fp,"feedback about the c programming\n");
fprintf(fp,"1.easy to understand\n");
fprintf(fp,"2.loops and arrays helped improve my logical thinking\n");
fprintf(fp,"3.pratical session made programming easier to understand\n");
fprintf(fp,"4.I learned about variable,datatype and operators\n");
fprintf(fp,"5.overall it was a good learning experience\n");
fclose(fp);
fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("file openning failed\n");
return 0;
}
fprintf(fp,"feedback about the c sir\n");
fprintf(fp,"1.jolly ah na sir\n");
fprintf(fp,"2.super ah class yaduparu\n");
fprintf(fp,"3.doubt keta nalla solli thavaru\n");
fprintf(fp,"4.porumai ahthigama iruku sir kita\n");
fprintf(fp,"5.avarutha ooruoda top la irukaru\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("file openning failed\n");
return 0;
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}

