#include <iostream>
#include <string.h>
using namespace std;
void Readfile (char s1[],char s2[],char s3[],char s4[],char s5[],char s6[])
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\TH3.inp","r");
    if (!fp)
    {
        cout<<"Cannot open file !";
        exit(0);
    }
    fgets(s1,256,fp);
    fgets(s2,256,fp);
    fgets(s3,256,fp);
    fgets(s4,256,fp);
    fgets(s5,256,fp);
    fgets(s6,256,fp);
    fclose(fp);
}
void printString (char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        cout<<s[i];
    }
    
}
//cau 1
int CountString (char s1[],char s2[],char s3[],char s4[],char s5[],char s6[])
{
    FILE *fp;
    // mo file doc
    fp=fopen("C:\\Users\\Dell\\Documents\\TH3.inp","r");
    int c=0;
    fgets(s1,256,fp);
    fgets(s2,256,fp);
    fgets(s3,256,fp);
    fgets(s4,256,fp);
    fgets(s5,256,fp);
    fgets(s6,256,fp);
    if (strstr(s1,"que huong")) c++;
    if (strstr(s2,"que huong")) c++;
    if (strstr(s3,"que huong")) c++;
    if (strstr(s4,"que huong")) c++;
    if (strstr(s5,"que huong")) c++;
    if (strstr(s6,"que huong")) c++;
    fclose(fp);
    return c;
}
//cau 1
void writeFile (char s1[],char s2[],char s3[],char s4[],char s5[],char s6[])
{
    // mo file ghi
    FILE *fp;
    int c=CountString(s1,s2,s3,s4,s5,s6);
    fp=fopen("C:\\Users\\Dell\\Documents\\TH3.out","w");
    fputs("CAU 1: ",fp);
    fprintf(fp,"%d",c);
    fputs("\n",fp);
    fclose(fp);
}
//cau 2
int CountWord (char s[])
{
    int chr=0,count=0;
    for (int i = 0; i < strlen(s); i++)
    {
       if (s[i]!=' ') chr++;
       else chr=0;
       if (chr==5) count++;
    }
    
    return count;
}
//cau 2
void writeCountWord (char s1[],char s2[],char s3[],char s4[],char s5[],char s6[])
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\TH3.out","a");
    fputs("CAU 2: ",fp);
    fprintf(fp,"%d ",CountWord(s1));
    fprintf(fp,"%d ",CountWord(s2));
    fprintf(fp,"%d ",CountWord(s3));
    fprintf(fp,"%d ",CountWord(s4));
    fprintf(fp,"%d ",CountWord(s5));
    fprintf(fp,"%d",CountWord(s6));
    fputs("\n",fp);
}
//cau 3
int CountVovel (char s[])
{
    int chr=0,count=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]!=' ')
            if (s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='a' || s[i]=='i')
                chr++;
        if (s[i+1]==' ') 
        {
            cout<<chr<<" ";
            chr=0;
        }
    }
    return chr;
}
//cau 3
void writeCountVovel (char s1[],char s2[],char s3[],char s4[],char s5[],char s6[])
{
    FILE *fp;
    fp=fopen("C:\\Users\\Dell\\Documents\\TH3.out","a");
    fputs("CAU 3: ",fp);
    fprintf(fp,"%d ",CountVovel(s1));
    fprintf(fp,"%d ",CountVovel(s2));
    fprintf(fp,"%d ",CountVovel(s3));
    fprintf(fp,"%d ",CountVovel(s4));
    fprintf(fp,"%d ",CountVovel(s5));
    fprintf(fp,"%d",CountVovel(s6));
    fputs("\n",fp);
}
//cau 4

int main()
{
    char s1[100],s2[100],s3[100],s4[100],s5[100],s6[100];
    Readfile(s1,s2,s3,s4,s5,s6);
    CountString(s1,s2,s3,s4,s5,s6);
    writeFile(s1,s2,s3,s4,s5,s6);
    writeCountWord(s1,s2,s3,s4,s5,s6);
    writeCountVovel(s1,s2,s3,s4,s5,s6);
    system("pause");
}