#include<stdio.h>
int main()
{
    char c,a,e,i,o,u;
    scanf("%c",&c);
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}