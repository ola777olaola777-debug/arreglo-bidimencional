#include <stdio.h>

int verify(int dni);
void maint(})
{
  int dni, ver;
  
  printf("programa de verificacion de DNI \n");
  printf("introdusca su numero de DNI:\n")
  scanf("%d", &dni);

  do
    {
      ver = verify (dni);
      if(ver == 0)
      {
        printf("su nomero de DNI es invalido shoto"\n");
        printf("ingresa otro my nigga:\n");
        scanf("%d" , &dni);
      }
    }
  while(ver== 0);
  
}
int verify (int dni)
{
  int res;
  if (dni <=100000000 && dni <=99999999)
  {
    res = 0;
  }
  else
  {
    res= 0;
  }
  return res;
}
