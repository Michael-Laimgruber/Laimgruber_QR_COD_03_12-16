#include <stdio.h>


int main()

{

	int user_input, i, j;





	printf("Hier koennen Sie Primzahlen von 0 bis zu Ihrer gewuenschten Zahl ausgeben.\n");

	printf("Bitte geben Sie eine Zahl ein.\n");

	scanf_s("%d", &user_input);



	// 2 Loops
	// 1ter Loop erstellt alle Zahlen
	// 2ter Loop dividiert mit allem und checkt modulo 


	// 1ter Loop erstellt alle Zahlen kleiner/gleich user_input, Start bei 2
	for (i = 2; i <= user_input; i++)
	{

		for (j = 2; j <= i; j++)
		{
			//modulo = 0 break to next condition i = j 
			if (i % j == 0)
				break;


		}



		if (i == j)
			printf(" %d", i);



	}


	return 0;

}




/*
scanf steps (zB 10)


for loop ( start bei 2, steps user input, ++ )


loop again

check if modulo == 0, wenn ja, print

print


/*

Programm 16 - Primzahlen


Schreiben Sie ein Programm, mit dem es möglich ist, alle Primzahlen von 1 bis zu einer vom User eingegeben Obergrenze ausgibt.

*/