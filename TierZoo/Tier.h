#pragma once
#include "stdafx.h"

// "Inline" Programmierung (.cpp fehlt) ist
// �bersichtlicher auf dem Papier
// und geht schneller!
// Kann aber zu Problemen in der Programmierung f�hren.

// Ab der zweiten Klausur und in der Abi-Pr�fung zugelassen.
 

class Tier
{
private:
	string name;
	Tier() {};

public:
	string getName() {
		return name;
	}

	void setName(string i_name) {
		name = i_name;
	}


	Tier(string i_name)
	{
		name = i_name;
	}

	~Tier()
	{
	}
};

