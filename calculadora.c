
#include<stdio.h>



#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3

int suma(int sumando1,int sumando2);
int resta(int restando1, int restando2);
int multiplicacion(int producto1, int producto2);

int main()
{

	int numero1,numero2,operacion,resultado;
	
	printf("\n Inserte la Operacion a realizar \n [1] Suma  \n [2] Resta \n [3] Multiplicacion  ");
        scanf("%d%*c",&operacion);
        printf("\n Inserte El primer Numero: ");
	scanf("%d*c",&numero1);
	printf("\n Inserte El segundo Numero: ");
	scanf("%d%*c",&numero2);


	if(operacion==SUMA)
	{
		resultado=suma(numero1,numero2);
	}
        if (operacion==RESTA)
	{
                resultado=resta(numero1,numero2);
        }
	if (operacion==MULTIPLICACION)
	{
	  	resultado=multiplicacion(numero1,numero2);
	}
	printf("\n [%d]",resultado);

}

int suma(int sumando1,int sumando2)
{
	return sumando1+sumando2;
}

int resta(int restando1, int restando2)
{
	return restando1-restando2;
}

int multiplicacion(int producto1, int producto2)
{
	return producto1*producto2;
}







