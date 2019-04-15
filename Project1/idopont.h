#ifndef IDOPONT_H
#define IDOPONT_H

struct Idopont {
	int ora, perc;
};

void beker(Idopont*);

void kiir(Idopont t, bool sortores = false);

//igaz ha t1 elobb van
bool kissebbe(Idopont, Idopont);

#endif
