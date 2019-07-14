
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main()	{
	char *resultado;
	char palabra_clave[50];
	char lineas[50][80];
	int i,j,c;
	bool entrar;
    printf("Ingrese la palabra clave a buscar: ");
	fgets(palabra_clave,50,stdin);
	palabra_clave[strcspn(palabra_clave, "\r\n")] = 0;
 	printf("Ingrese el texto Maximo 50 lineas, escriba la  letra FIN (En mayuscula POR FAVOR ) para que el programa deje de leer las lineas \n");
	i = 0;
	entrar = true;
	while(entrar && i < 50){
		memset(lineas[i],0,80);
		fgets(lineas[i],80,stdin);
		lineas[i][strcspn(lineas[i], "\r\n")] = 0;
		if(strlen(lineas[i]) > 2 && strncmp(lineas[i],"FIN",3) == 0)	{
			entrar = false;
		}
		i++;
	}
	printf("Lineas Leidas %i\n",i);
	printf("Buscando la palabra clave en el texto leido...\n");
	j = 0;
	c = 0;
	resultado = NULL;
	while(j < i)	{
		resultado = strstr(lineas[j],palabra_clave);
		if(resultado != NULL){
			memset(lineas[j],0,80);
			c++;
		}
		resultado = NULL;
		j++;
	}
	if(c == 0)	{
		printf("Listo, NO se encontraron Lineas con la palabra clave, imprimiendo el texto leido\n");
	}
	else	{
		printf("Listo se encontraron %i Lineas con la palabra clave, imprimiendo el texto resultante\n",c);
	}
	j = 0;
	while(j < i)	{
		printf("%s\n",lineas[j]);
		j++;
	}
	return 0;
}
