#include <stdio.h>

int main()
{
	int user_input;

	int min = 0;
	int max = 0;

	// Clean Code - Beschreibe Programm und Funktionen 
	printf("Hier koennen Sie sich von mehreren POSITIVEN Zahlen\ndie kleinste und die groesste Zahl ausgeben lassen.\n\n");
	printf("Geben Sie zuerst einige Zahlen ein die Sie jeweils mit Enter bestaetigen.\nZum Starten der Berechnung geben sie die Zahl Null (0) ein.\n");

	// Start Big Infinite user input loop
	while (1)
	{

		//User Input Scan
		scanf_s("%d", &user_input);

		// 1) CHECK: User Input = 0 = break out to next if else
		if (user_input == 0)
			break;


		// 2) CHECK: User input error = (kleiner als 0)
		if (user_input < 0)
		{
			printf("Bitte nur positive Zahlen eingeben!\n\n\n");
			continue;
		}

		// 3) Check if 0 and shuffle 
		if (min == 0 || user_input < min) min = user_input;
		if (user_input > max) max = user_input;

	}

	// check if 0 is first value = no numbers = print error
	if (max == 0)
	{

		printf("Sie haben leider keine Zahlen eingegeben.\n");

	}

	else
	{

		printf("Hier sehen Sie die kleinste von Ihnen eingegebene Zahl: %d\n", min);

		printf("Hier sehen Sie die groesste von Ihnen eingegebene Zahl: %d\n", max);

	}

	return 0;
}




/*

Programm 14 – Nur positive Zahlen


Erstellen Sie ein Programm, das eine beliebige Anzahl positiver Zahlen einliest.

Es sollen dabei nur positive Zahlen eingelesen werden können.

Durch die Eingabe der Zahl 0 wird das Einlesen beendet.

Nach Ende des Einlesens soll die größte und kleinste der eingelesenen Zahlen ausgegeben werden



*/