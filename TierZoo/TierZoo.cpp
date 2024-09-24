#include "stdafx.h"
#include "Tier.h"
#include "Zoo.h"

int main()
{
	// Aggregation
	// Die Objekte werden >> au�erhalb der Klasse << erzeugt und dann als Referenz �bergeben, 
	// so dass sie auch dann noch existieren, wenn das Objekt Zoo zerst�rt wird.

	Tier* t1 = new Tier("Giraffe");
	Tier* t2 = new Tier("Elefant");
	Tier* tNull = nullptr;
	
	Zoo* z = new Zoo("Erlebniszoo Wienerwald", t1); // Aggregation, die Klasse Zoo l��t sich nicht ohne Tier erstellen.
	
	z->hinzuf�genTier(t2);

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
		cout << "Du hast die Fl�gel vom Vogel NICHT gel�scht!" << endl;
	}



    return 0;
}

