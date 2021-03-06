#include <stdio.h>
#include <string.h>

int string_length(char s[]) {
   int i = 0;

   while(s[i]!='\0')
      i++;

   return i;
}

void string_reverse(char st[]) {
   int i,j,len;
   char ch;

   j = len = string_length(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

int main (void) {
   char line[] = "COT BSIT BSEMC";
   char reverse[50] = "", temp[20];
   int i, j, n;

   n = string_length(line);

   for(i = n-1; i >= 0; --i) {

      for(j = 0; i >= 0 && line[i] != ' '; --i,++j)
         temp[j] = line[i];

      temp[j] = '\0';

      string_reverse(temp);

      strcat(reverse,temp);
      strcat(reverse," ");
   }

   printf("Enter any string - %s\n", line);
   printf("Reversed ordered words - %s\n",reverse);

   return 0;
}
