#include <stdio.h>

int main()


{
	int amount;
	int multiplicator;
	int result = 1;


	// user input and scan
	printf("Hier koennen Sie eine Zahlenreihe eingeben in der der folgende Wert immer das X Fache sein wird.\n");
	printf("Bitte geben Sie jeweils zwei Zahlen ein und druecken Sie Enter.\n");

	printf("Anzahl der Berechnungen: ");
	scanf_s("%d", &amount);

	printf("Vervielfachungsfaktor x: ");
	scanf_s("%d", &multiplicator);


	// Loop
	for (int i = 0; i < amount; i++)
	{

		// calc first to avoid start with 0
		result = result * multiplicator;

		//print result mit multiplicator
		printf("%d ", result);
		


	}



	return 0;
}





/*

Programm 15 - Multiplikationsreihe


Schreiben Sie ein Programm, dass eine Folge von beliebig vielen Zahlen erzeugt, in der jede Zahl den x-fachen Wert der vorhergehenden hat.

Die Anzahl der Berechnungen und der Wert für die Vervielfachung x sollten von/m dem/r Benutzer*in eingegeben werden können.

Starten Sie die Folge mit dem Wert 1. Alle Zahlen sind in der Konsole auszugeben.



*/