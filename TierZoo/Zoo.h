#pragma once
#include "stdafx.h"
#include "Tier.h"

class Zoo
{
private:
	string name;
	list<Tier*> alleTiere;  

public:
	string getName() {
		return name;
	}

	void setName(string i_name) {
		name = i_name;
	}

	Zoo(string i_name, Tier* t  ) // Aggregation, die Klasse Zoo l�sst sich nicht ohne Tier erstellen.
	{
		name = i_name;
		if (t == nullptr && alleTiere.size() == 0) // Wenn t gar kein Tier ist und im Zoo auch keine Tiere sind,
		{
			this->~Zoo(); // dann l�se den Zoo auf,
		}
		else
		{
			alleTiere.push_back(t); // sonst f�ge das Tier an die Lister mit den anderen Tieren.
		}
	}

	void hinzuf�genTier(Tier* t) {
		alleTiere.push_back(t);
	}

	~Zoo()
	{
		alleTiere.clear();
		cout << "Zoo geschlossen" << endl;
	}
};

