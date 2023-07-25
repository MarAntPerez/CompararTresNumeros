#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int OPCION_ES = 1;
	const int OPCION_EN = 2;
	int idiomaSeleccionado;
	
	int numberOne;
	int numberTwo;
	int numberThree;
	
	printf("Selecciona un idima: ");
	printf("\n1)Español.");
	printf("\n2)Ingles.");
	scanf("%i", &idiomaSeleccionado);
	
	if(idiomaSeleccionado==OPCION_ES || idiomaSeleccionado==OPCION_EN){
		
	if(idiomaSeleccionado==OPCION_ES){
		printf("Ingresa un numero: ");
	}else if(idiomaSeleccionado==OPCION_EN){
		printf("Enter a number: ");
	}
	
	scanf("%i", &numberOne);
	
	if(idiomaSeleccionado==OPCION_ES){
		printf("Ingresa otro numero ");
	}else if(idiomaSeleccionado==OPCION_EN){
		printf("Enter another number: ");
	}
	
	scanf("%i", &numberTwo);
	
	if(idiomaSeleccionado==OPCION_ES){
		printf("Ingresa un ultimo numero: ");
	}else if(idiomaSeleccionado==OPCION_EN){
		printf("Enter a last number:");
	}
	
	scanf("%i", &numberThree);
	
	if(numberOne > numberTwo && numberTwo > numberThree){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberOne, numberTwo, numberThree);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberOne, numberTwo, numberThree);
		}
    }else if(numberTwo > numberOne && numberOne > numberThree){
    	if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberTwo, numberOne, numberThree);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberTwo, numberOne, numberThree);
		}
	}else if(numberThree > numberOne && numberOne > numberTwo){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberThree, numberOne, numberTwo);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberThree, numberOne, numberTwo);
		}
	}else if(numberOne > numberThree && numberThree > numberTwo){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberOne, numberThree, numberTwo);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberOne, numberThree, numberTwo);
		}
	}else if(numberTwo > numberThree && numberThree > numberOne){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberTwo, numberThree, numberOne);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberTwo, numberThree, numberOne);
		}
	}else if(numberThree > numberTwo && numberTwo > numberOne){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros ordenados de mayor a menor son: %i, %i, %i", numberThree, numberTwo, numberOne);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("The numbers ordered from highest to lowest are: %i, %i, %i", numberThree, numberTwo, numberOne);
		}
	}else if(numberOne == numberTwo && numberOne > numberThree){
		if(idiomaSeleccionado==OPCION_ES){
			printf("El numero %i es mayor al numero %i", numberOne, numberThree);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("the number %i is greater than the number %i", numberOne, numberThree);
		}
	}else if(numberTwo == numberThree && numberTwo > numberOne){
		if(idiomaSeleccionado==OPCION_ES){
			printf("El numero %i es mayor al numero %i", numberTwo, numberOne);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("the number %i is greater than the number %i", numberTwo, numberOne);
		}
	}else if(numberOne == numberThree && numberThree > numberTwo){
		if(idiomaSeleccionado==OPCION_ES){
			printf("El numero %i es mayor al numero %i", numberOne, numberTwo);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("the number %i is greater than the number %i", numberOne, numberTwo);
		}
	}else if(numberOne == numberThree && numberTwo > numberThree){
		if(idiomaSeleccionado==OPCION_ES){
			printf("El numero %i es mayor al numero %i", numberTwo, numberOne);
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("the number %i is greater than the number %i", numberTwo, numberOne);
		}
	}else if(numberOne == numberTwo && numberTwo == numberThree){
		if(idiomaSeleccionado==OPCION_ES){
			printf("Los numeros son iguales");
		}else if(idiomaSeleccionado==OPCION_EN){
			printf("All numbers are equals");
		}
	}else{
		printf("Error.");
	}
}else{
	printf("No pudimos cargar el idioma seleccionado.");
}

	
	return 0;
}
