#include <stdio.h>

int main()
{

    int start_number, multiplicator, steps;
    int start_number_2;
    int result;


    // Eingabe

    printf("Hallo, hier koennen Sie einen schoenen Turm berechnen. Viel Spass.\n\nBitte geben Sie eine Start Nummer ein.");
    printf("Geben Sie eine Zahl ein: ");
    scanf_s("%d", &start_number);
    printf("Geben Sie den Multiplikationsfaktor ein: ");
    scanf_s("%d", &multiplicator);
    printf("Geben Sie Anzahl der Schritte ein: ");
    scanf_s("%d", &steps);


    // copy start_number value into result 

    //start_number_2 = start_number;

    result = start_number;


    for (int i = 0; i < steps; i++)
    {
        //split printf to show initial multiplication (show multiplication before first iteration ++)
        printf("%d * %d = ", result, multiplicator);

        result = result * multiplicator;

        printf("%d\n", result);
    }

    // Turmrechnung: Divisionen

    for (int i = 0; i < steps; i++)
    {
        //split printf to show initial division (show division before first iteration ++)
        printf("%d / % d = ", result, multiplicator);

        result = result / multiplicator;

        printf("%d\n", result);
    }



    //printf("%d / %d = %d", start_number_2, multiplicator, start_number_2 = start_number_2 / multiplicator);



    return 0;
}


/*


Programm 12: - Turmrechnung

Schreiben Sie ein Programm, das eine Turmrechnung durchführt.

Eine Turmrechnung besteht aus einer gleich großen 	Anzahl von Multiplikationen und Divisionen

Beispiel:
    5 * 7 = 35
    35 * 7 = 245
    245 * 7 = 1715
    1715 * 7 = 12005
    12005 / 7 = 1715
    1715 / 7 = 245
    245 / 7 = 35
    35 / 7 = 5


Achten Sie darauf, dass die beiden Zahlen als auch die Anzahl der Rechnungen eingeben werden können– bei obigem Beispiel sind die Zahlen 5 und 7 und die Anzahl der steps ist 4!


*/