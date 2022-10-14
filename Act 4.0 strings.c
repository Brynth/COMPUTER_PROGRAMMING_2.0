/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    int i, length, vowels=0, consonants=0;

    printf("Input a Sentence:");
    gets(s);

    i=0;

    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            s[i]=s[i]-32;
        i++;
    }
    printf("String Converted: ");
    puts(s);

    printf("\n");

    length = strlen(s);

    printf("String Length: %d\n", length);

    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97& s[i]<=122))
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
