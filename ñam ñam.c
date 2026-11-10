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
  verl = dni_verify(dni);
  if(verl ==1)
  {
    printf ("El DNI es balido my nigga.\n");
  }
   
  
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
int dni_valid (int dni)
{
  char l1, l2;
  int val = 0;

  printf("Dame la letra correcta de tu DNI:");
  scanf("%c";&l1);

  l2 = dni_letter (dni);

  if(l1 == l2)
  {
    val = 1;
  }
  else
  {
    val = 0;
  }
}

char dni_letter (int dni)
{
  int res = 0;
  
  char val [val] = {'T' , 'R' , 'W' ,'A' , 'G' , 'M' , 'Y', 'F', 'P',  'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K'};
}
