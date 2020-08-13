#include <stdio.h>
#include <string.h>

int main()
{
      char a[101],b[101];

      gets(a);
      gets(b);

      int i;
      for ( i=0; a[i]!='\0' && b[i]!='\0'; i++)
      {
          if ( a[i]==b[i]) printf("0");
          else printf("1");
      }

      return 0;
}
