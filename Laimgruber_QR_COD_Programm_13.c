#include <stdio.h>

int main()
{

    int number_1 = 0;
    int number_2 = 1;
    int number_3;
    int steps;

    printf("Hier koennen Sie eine Fibonacci Reihe bis zu einer Zahl Ihrer Wahl ausgeben lassen: \n\n");

    printf("Wieviele Schritte wollen Sie ausgeben: ");
    scanf_s(" %d", &steps);

    //zuerst printen damit variablen noch 0 und 1 sind und ausgegeben werden (0 1 x y z etc)
    printf(" %d %d", number_1, number_2);


    //jetzt loopen und nach 0 und 1 nachprinten
    for (int i = 0; i < steps; i++)
    {
        number_3 = number_1 + number_2;

        printf(" %d", number_3);

        //rutsche variablen eins nach links um weiterrechnen zu können
        number_1 = number_2; 

        number_2 = number_3;


    }


    return 0;
}



/*

Programm 13 – Fibonacci - Reihe


Schreiben Sie ein Programm, das die Fibonacci-Reihe bis zu einer eingegebenen Höchstgrenze erzeugt und ausgibt.


Wissenswertes
Die Fibonacci-Reihe ist eine Folge von Zahlen, bei der jede Zahl (außer den ersten beiden) die Summe der beiden vorhergehenden Zahlen ist. Die Reihe beginnt so:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...


Hier ist der Ablauf:

Die ersten beiden Zahlen sind 0 und 1.

Die dritte Zahl entsteht, indem man 0 + 1 rechnet (ergibt 1).

Die vierte Zahl ergibt sich aus 1 + 1 (ergibt 2).

Die fünfte Zahl entsteht aus 1 + 2 (ergibt 3).

Und so weiter.



Die Fibonacci-Reihe findet in vielen Bereichen Anwendung, darunter:

Mathematik und Informatik

Sie wird häufig als Beispiel für rekursive Algorithmen verwendet.
Dabei wird die Berechnung einer Zahl in der Reihe in kleinere, ähnliche Berechnungen aufgeteilt. Das hilft, grundlegende Programmierkonzepte wie Rekursion zu verstehen.

In der Algorithmus-Analyse wird die Fibonacci-Folge auch genutzt, um Wachstumsmuster zu beschreiben und um Optimierungsprobleme zu lösen.
Natur


In der Natur sieht man die Fibonacci-Folge oft in Pflanzenstrukturen. Zum Beispiel haben Sonnenblumenkerne, Tannenzapfen und Ananas eine Anordnung, die der Fibonacci-Reihe folgt. Auch die Anzahl der Blütenblätter bei vielen Blumen entspricht oft einer Fibonacci-Zahl (z. B. 3, 5, 8, 13).
Die Fibonacci-Reihe ist also nicht nur ein mathematisches Konzept, sondern hat vielfältige Anwendungen in der realen Welt, von Naturphänomenen bis hin zu Finanzstrategien


*/