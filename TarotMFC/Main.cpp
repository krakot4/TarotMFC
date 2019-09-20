#include <iostream>
#include "stdafx.h"
#include "CIHM.h"
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#define MODETEST

#ifndef MODETEST
void main()
{
	CIHM ihm = CIHM();
	ihm.Menu();
}
#endif