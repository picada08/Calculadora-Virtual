#include<stdio.h>



#define SUMA =0

int suma(int sumando1,int sumando2);



int main()
{

	int numero1,numero2,operacion,resutado;
	
	printf("\n Inserte la Operacion a realizar \n [0] Suma  \n [1]Resta \n [2] Multiplicacion  ");
        scanf("%d%*c",&operacion);
        print("\n Inserte El primer Numero");
	scanf("%d*c",&numero1);
	printf("\n Inserte El segundo Numero");
	scanf("%d%*c",&numero2);
	if(operacion==SUMA)
	{
		resultado=suma(numero1,numero2);
	}
	//TODO PRINT BINARY
}

int suma(int sumando1,int sumando2)
{
	return sumando1+sumando2;
}






}
