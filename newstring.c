#include <stdio.h>

size_t my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;


   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Tutorials",
      "Tutorials Pt-Br"
   };

   return 0;
}