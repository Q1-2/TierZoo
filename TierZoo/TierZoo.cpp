#include "stdafx.h"
#include "Tier.h"
#include "Zoo.h"

int main()
{
	// Aggregation
	// Die Objekte werden >> außerhalb der Klasse << erzeugt und dann als Referenz übergeben, 
	// so dass sie auch dann noch existieren, wenn das Objekt Zoo zerstört wird.

	Tier* t1 = new Tier("Giraffe");
	Tier* t2 = new Tier("Elefant");
	Tier* tNull = nullptr;
	
	Zoo* z = new Zoo("Erlebniszoo Wienerwald", t1); // Aggregation, die Klasse Zoo läßt sich nicht ohne Tier erstellen.
	
	z->hinzufügenTier(t2);

	cout << z->getName() << endl;
	cout << t1->getName() << endl;
	cout << t2->getName() << endl;

	//z->~Zoo();

	cout << z->getName() << endl;
	cout << t1->getName() << endl;
	cout << t2->getName() << endl;

	try {

		if (z->getName()=="") throw "Fehler";


	}
	catch (...)
	{
		cout << "Du hast die Flügel vom Vogel NICHT gelöscht!" << endl;
	}



    return 0;
}

