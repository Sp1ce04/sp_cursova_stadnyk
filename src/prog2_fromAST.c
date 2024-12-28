#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _AAAAAAAAAAAAAAA;
   int _BBBBBBBBBBBBBBB;
   int _CCCCCCCCCCCCCCC;
   printf("Enter _AAAAAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBBBBB);
   printf("Enter _CCCCCCCCCCCCCCC:");
   scanf("%d", &_CCCCCCCCCCCCCCC);
   if (_AAAAAAAAAAAAAAA > _BBBBBBBBBBBBBBB) 
   {
   if (_AAAAAAAAAAAAAAA > _CCCCCCCCCCCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _CCCCCCCCCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", _AAAAAAAAAAAAAAA);
   goto Outofif;
   }
   }
   if (_BBBBBBBBBBBBBBB < _CCCCCCCCCCCCCCC) 
   {
   printf("%d\n", _CCCCCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", _BBBBBBBBBBBBBBB);
   }
Outofif:
   if (((_AAAAAAAAAAAAAAA == _BBBBBBBBBBBBBBB && _AAAAAAAAAAAAAAA == _CCCCCCCCCCCCCCC) && _BBBBBBBBBBBBBBB == _CCCCCCCCCCCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_AAAAAAAAAAAAAAA < 0 || _BBBBBBBBBBBBBBB < 0) || _CCCCCCCCCCCCCCC < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_AAAAAAAAAAAAAAA < (_BBBBBBBBBBBBBBB + _CCCCCCCCCCCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
