#include <stdio.h>
main()
{ char  s[80],c;
  int  j,k;
  printf("\nEnter a string: ");
  gets(s);
  printf("\nEnter a character: ");
  c=getchar( );
  for(j=k=0;s[j]!= '\0';j++)
  if(s[j]!=c)
     s[k++]=s[j];
   s[k]='\0';
  printf("\n%s",s);
}

