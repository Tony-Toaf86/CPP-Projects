#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

class matematica
{
public:
float suma (int X, int n);
float resta (int X, int n);
float multiplicacion (int X, int n);
};

float matematica::multiplicacion (int X, int n)
{ float l;
l=X*n;
return l;
}

float matematica::suma(int X, int n)
{ float l;
l=X+n;
return l;
}

float matematica::resta(int X, int n)
{ float l;
l=X-n;
return l;
}
int a=0, q=0;
void mostrar ()

{ printf(" CALCULATOR/CALCULADORA\n\n");
printf("-------------------------------------------\n\n");
printf(" %d\n\n",a);
printf("-------------------------------------------\n\n");
printf("1 2 3 - +\n\n");
printf("4 5 6 * / \n\n");
printf("7 8 9 ^ intro\n\n");
printf("[esc] [del] [<] 0 \n\n");
}

main ()
{ int b,c=0,t=0,p,f, acum; float o; matematica y;
do
{ system ("cls");
mostrar ();
b=getch ();
switch (b)
{ case 49:
a=1;
break;
case 50:
a=2;
break;
case 51:
a=3;
break;
case 52:
a=4;
break;
case 53:
a=5;
break;
case 54:
a=6;
break;
case 55:
a=7;
break;
case 56:
a=8;
break;
case 57:
a=9;
break;
case 48:
a=0;
break;
case 43:
q=q+a;
a=q;
break;
case 45:
q=q-a;
a=q;
break;
case 42:
if (q==0)
{q=1;
q=q*a;
a=q;}
else
q=q*a; a=q;
break;
case 47:
if (q==0)
{q=1;
q=a/q; a=q;
}
else
q=a/q; a=q;
break;
case 27:
break;
case 8:
system ("cls");
a=0;
break;

}
} while (b!=27);
}