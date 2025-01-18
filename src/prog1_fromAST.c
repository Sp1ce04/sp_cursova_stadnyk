#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _AAAAAAAAAAAAAAA;
   int _BBBBBBBBBBBBBBB;
   int _XXXXXXXXXXXXXXX;
   int _YYYYYYYYYYYYYYY;
   printf("Enter _AAAAAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBBBBB);
   printf("%d\n", (_AAAAAAAAAAAAAAA + _BBBBBBBBBBBBBBB));
   printf("%d\n", (_AAAAAAAAAAAAAAA - _BBBBBBBBBBBBBBB));
   printf("%d\n", (_AAAAAAAAAAAAAAA * _BBBBBBBBBBBBBBB));
   printf("%d\n", (_AAAAAAAAAAAAAAA / _BBBBBBBBBBBBBBB));
   printf("%d\n", (_AAAAAAAAAAAAAAA % _BBBBBBBBBBBBBBB));
   _XXXXXXXXXXXXXXX = (((_AAAAAAAAAAAAAAA - _BBBBBBBBBBBBBBB) * 10) + ((_AAAAAAAAAAAAAAA + _BBBBBBBBBBBBBBB) / 10));
   _YYYYYYYYYYYYYYY = (_XXXXXXXXXXXXXXX + (_XXXXXXXXXXXXXXX % 10));
   printf("%d\n", _XXXXXXXXXXXXXXX);
   printf("%d\n", _YYYYYYYYYYYYYYY);
   system("pause");
    return 0;
}
