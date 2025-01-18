#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int   _AAAAAAAAAAAAAAA, _BBBBBBBBBBBBBBB, _CCCCCCCCCCCCCCC, _TTTTTTTTTTTTTTT;
   printf("Enter _AAAAAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBBBBB);
   printf("Enter _CCCCCCCCCCCCCCC:");
   scanf("%d", &_CCCCCCCCCCCCCCC);
   if ((_BBBBBBBBBBBBBBB > _AAAAAAAAAAAAAAA))
{
   goto Abigger;
}
   else
{
   _TTTTTTTTTTTTTTT = _AAAAAAAAAAAAAAA;
}
Outofib:
   if ((_CCCCCCCCCCCCCCC > _BBBBBBBBBBBBBBB && _CCCCCCCCCCCCCCC > _AAAAAAAAAAAAAAA))
{
   goto Outofic;
}
   else
{
   goto Outofif;
}
Abigger:
   _TTTTTTTTTTTTTTT = _BBBBBBBBBBBBBBB;
   goto Outofib;
Outofic:
   _TTTTTTTTTTTTTTT = _CCCCCCCCCCCCCCC;
   goto Outofif;
Outofif:
   printf("%d\n", _TTTTTTTTTTTTTTT);
   if (((_AAAAAAAAAAAAAAA == _BBBBBBBBBBBBBBB) && (_AAAAAAAAAAAAAAA == _CCCCCCCCCCCCCCC) && (_BBBBBBBBBBBBBBB == _CCCCCCCCCCCCCCC)))
{
   printf("%d\n", 1);
}
   else
{
   printf("%d\n", 0);
}
   if (((_AAAAAAAAAAAAAAA < 0) || (_BBBBBBBBBBBBBBB < 0) || (_CCCCCCCCCCCCCCC < 0)))
{
   printf("%d\n", -1);
}
   else
{
   printf("%d\n", 0);
}
   if ((!(_AAAAAAAAAAAAAAA < (_BBBBBBBBBBBBBBB + _CCCCCCCCCCCCCCC))))
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
