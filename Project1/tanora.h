#pragma once

#include <string>

#include "Idopont.h"

struct Tanora {
	std::string nev;
	Idopont kezdes, vege;
};

void beker(Tanora*);

void kiir(const Tanora*);