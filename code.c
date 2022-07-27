#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main() {
   char ;
   int capital,small;
   printf("Enter an alphabet: ");
   scanf("%c", &l);
   lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
   uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
   if (!isalpha(c))
      printf("not a letter");
   else if (capital|| small)
      printf("%c is a vowel.", l);
   else
      printf("%c is a consonant.", l);

   return 0;
}
