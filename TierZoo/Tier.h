#pragma once
#include "stdafx.h"

// "Inline" Programmierung (.cpp fehlt) ist
// übersichtlicher auf dem Papier
// und geht schneller!
// Kann aber zu Problemen in der Programmierung führen.

// Ab der zweiten Klausur und in der Abi-Prüfung zugelassen.
 

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

